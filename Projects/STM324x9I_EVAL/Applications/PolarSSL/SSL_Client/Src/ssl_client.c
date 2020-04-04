/**
  ******************************************************************************
  * @file    PolarSSL/SSL_Client/Src/ssl_client.c
  * @author  MCD Application Team
  * @version V1.4.5
  * @date    03-June-2016
  * @brief   SSL Client main task
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright © 2016 STMicroelectronics International N.V. 
  * All rights reserved.</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "config.h"
#include "polarssl/net.h"
#include "polarssl/ssl.h"
#include "polarssl/rsa.h"
#include "polarssl/ctr_drbg.h"
#include "polarssl/error.h"
#include "polarssl/certs.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define SSL_SERVER_PORT 443 /* Server port number */
#define SSL_SERVER_NAME "192.168.0.1" /* Server address */
#define GET_REQUEST "GET / HTTP/1.0\r\n\r\n" /* HTTP request */

#define DEBUG_LEVEL   1   /* Set DEBUG_LEVEL if you want to enable SSL debug
option, this should be set to 2, 3, 4 or 5 */

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* SSL structures */
rng_state rngs;
ssl_context ssl;
ssl_session ssn;

/* Private functions ---------------------------------------------------------*/
void my_debug(void *ctx, int level, const char *str)
{
  if(level < DEBUG_LEVEL)
  {
    printf("%s", str); 
  }
}

/**
  * @brief  SSL client task.
  * @param  pvParameters not used
  * @retval None
  */
void ssl_client(void const * argument)
{
  int ret, len, server_fd;
  unsigned char buf[1024];
  ssl_context ssl;
  x509_cert cacert;
  
  memset( &ssl, 0, sizeof( ssl_context ) );
  memset( &cacert, 0, sizeof( x509_cert ) );
  
  /*
  *  Initialize certificates
  */
  printf( "  . Loading the CA root certificate ..." );
  
#if defined(POLARSSL_CERTS_C)
  ret = x509parse_crt( &cacert, (const unsigned char *) test_ca_crt,
                      strlen( test_ca_crt ) );
#else
  ret = 1;
  printf("POLARSSL_CERTS_C not defined.");
#endif
  
  if( ret < 0 )
  {
    printf( " failed\n  !  x509parse_crt returned -0x%x\n\n", -ret );
    goto exit;
  }
  
  printf( " ok (%d skipped)\n", ret );
  
  /* Start the connection */
  do
  {
    printf(( "\n\rSSL : Start the connection \n\r"));
    printf("\n\rConnecting to tcp/%s/ Port:%4d...", SSL_SERVER_NAME, SSL_SERVER_PORT); 
    
    /* Bint the connection to SSL server port */
    ret = net_connect(&server_fd, SSL_SERVER_NAME, SSL_SERVER_PORT);
    if(ret != 0)
    {
      /* Connection to SSL server failed */
      printf(" failed \n\r ! net_connect returned %d\n\r", -ret);
      
      /* Wait 500 ms until next retry */
      vTaskDelay(500);
    } 
  }while(ret!=0);
  
  printf( " ok\n\r" );
  
  /*
  * 2. Setup stuff
  */
  printf( "  . Setting up the SSL/TLS structure..." );
  
  if( ( ret = ssl_init( &ssl ) ) != 0 )
  {
    printf( " failed\n  ! ssl_init returned %d\n\n\r", ret );
    goto exit;
  }
  
  printf( " ok\n\r" );
  
  ssl_set_endpoint( &ssl, SSL_IS_CLIENT );
  ssl_set_authmode( &ssl, SSL_VERIFY_OPTIONAL );
  ssl_set_ca_chain( &ssl, &cacert, NULL, "PolarSSL Server 1" );
  
  ssl_set_rng( &ssl, RandVal , NULL );
  ssl_set_dbg( &ssl, my_debug, NULL);
  ssl_set_bio( &ssl, net_recv, &server_fd,
              net_send, &server_fd );
  
  /*
  * Handshake
  */
  printf( "  . Performing the SSL/TLS handshake..." );
  
  while( ( ret = ssl_handshake( &ssl ) ) != 0 )
  {
    if( ret != POLARSSL_ERR_NET_WANT_READ && ret != POLARSSL_ERR_NET_WANT_WRITE )
    {
      printf( " failed\n  ! ssl_handshake returned -0x%x\n\n\r", -ret );
      goto exit;
    }
  }
  
  printf( " ok\n\r" );
  
  /*
  * Verify the server certificate
  */
  printf( "\n\r  . Verifying peer X.509 certificate..." );
  
  if( ( ret = ssl_get_verify_result( &ssl ) ) != 0 )
  {
    printf( " failed\n\r" );
    
    if( ( ret & BADCERT_EXPIRED ) != 0 )
      printf( "  ! server certificate has expired\n" );
    
    if( ( ret & BADCERT_REVOKED ) != 0 )
      printf( "  ! server certificate has been revoked\n" );
    
    if( ( ret & BADCERT_CN_MISMATCH ) != 0 )
      printf( "  ! CN mismatch (expected CN=%s)\n", "PolarSSL Server 1" );
    
    if( ( ret & BADCERT_NOT_TRUSTED ) != 0 )
      printf( "  ! self-signed or not signed by a trusted CA\n" );
    
    printf( "\n\r" );
  }
  else
    printf( " ok\n\r" );
  
  /*
  * Write the GET request
  */
  printf( "  > Write to server:" );
  
  len = sprintf( (char *) buf, GET_REQUEST );
  
  while( ( ret = ssl_write( &ssl, buf, len ) ) <= 0 )
  {
    if( ret != POLARSSL_ERR_NET_WANT_READ && ret != POLARSSL_ERR_NET_WANT_WRITE )
    {
      printf( " failed\n  ! ssl_write returned %d\n\n\r", ret );
      goto exit;
    }
  }
  
  len = ret;
  printf( " %d bytes written\n\n\r%s", len, (char *) buf );
  
  /*
  * Read the HTTP response
  */
  printf( "  < Read from server:" );
  
  do
  {
    len = sizeof( buf ) - 1;
    memset( buf, 0, sizeof( buf ) );
    ret = ssl_read( &ssl, buf, len );
    
    if( ret == POLARSSL_ERR_NET_WANT_READ || ret == POLARSSL_ERR_NET_WANT_WRITE )
      continue;
    
    if( ret == POLARSSL_ERR_SSL_PEER_CLOSE_NOTIFY )
      break;
    
    if( ret < 0 )
    {
      printf( "failed\n\r  ! ssl_read returned %d\n\n\r", ret );
      break;
    }
    
    if( ret == 0 )
    {
      printf( "\n\nEOF\n\n\r" );
      break;
    }
    
    len = ret;
    printf( " %d bytes read\n\n\r%s", len, (char *) buf );
  }
  while( 1 );
  
exit:

#ifdef POLARSSL_ERROR_C
  if( ret != 0 )
  {
    char error_buf[100];
    error_strerror( ret, error_buf, 100 );
    printf("Last error was: %d - %s\n\n\r", ret, error_buf );
  }
#endif
  
  x509_free( &cacert );
  net_close( server_fd );
  ssl_free( &ssl );
  
  memset( &ssl, 0, sizeof( ssl ) );
  
  /* Infinite loop */
  for( ;; ) 
  {
    /* Toggle LED1 */
    BSP_LED_Toggle(LED1);
    
    /* Insert 400 ms delay */
    osDelay(400);
  }
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

