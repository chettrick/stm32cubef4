/**
  @page FreeRTOS message queue application
 
  @verbatim
  ******************** (C) COPYRIGHT 2014 STMicroelectronics *******************
  * @file    FreeRTOS/FreeRTOS_Queues/readme.txt
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-February-2014
  * @brief   Description of the STM32F4xx CMSIS RTOS message queue example.
  ******************************************************************************
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  @endverbatim

@par Description

This directory contains a set of source files that implement an example
that uses message queues with CMSIS RTOS API

This example creates two threads that send and receive an incrementing number 
to/from a queue.
One thread acts as a producer and the other as the consumer.  The consumer 
is a higher priority than the producer and is set to block on queue reads. 
The queue only has space for one item - as soon as the producer posts a
message on the queue the consumer will unblock, preempt the producer, 
and remove the item.  


@note Care must be taken when using HAL_Delay(), this function provides accurate delay (in milliseconds)
      based on variable incremented in SysTick ISR. This implies that if HAL_Delay() is called from
      a peripheral ISR process, then the SysTick interrupt must have higher priority (numerically lower)
      than the peripheral interrupt. Otherwise the caller ISR process will be blocked.
      To change the SysTick interrupt priority you have to use HAL_NVIC_SetPriority() function.
      
@note The application need to ensure that the SysTick time base is always set to 1 millisecond
      to have correct HAL operation.

@par Directory contents
    - FreeRTOS/FreeRTOS_Queues/Inc/main.h                main config file
    - FreeRTOS/FreeRTOS_Queues/Inc/stm32f4xx_hal_conf.h  HAL Library Configuration file
    - FreeRTOS/FreeRTOS_Queues/Inc/stm32f4xx_it.h        Header for stm32f4xx_it.c
    - FreeRTOS/FreeRTOS_Queues/Inc/FreeRTOSConfig.h      FreeRTOS Configuration file
    - FreeRTOS/FreeRTOS_Queues/Src/main.c                main program file
    - FreeRTOS/FreeRTOS_Queues/Src/stm32f4xx_it.c        STM32 Interrupt handlers

@par Hardware and Software environment

  - This example runs on STM32F40xxx/STM32F41xxx devices.
    
  - This example has been tested with STM324xG-EVAL evaluation board and can be
    easily tailored to any other supported device and development board. 

@par How to use it ?

In order to make the program work, you must do the following:
  1. Load the demonstration code in the STM32F4xx Flash memory (see below)
  2. Add the following variables (ProducerValue , ConsumerValue) to the live 
     watch, they must remain equal all the time
     LED1 should toggle
     LED3 will turn on in case of error

In order to make the program work, you must do the following :
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example
 
 * <h3><center>&copy; COPYRIGHT STMicroelectronics</center></h3>
 */
