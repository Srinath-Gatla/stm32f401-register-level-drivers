#ifndef GPIO_H
#define GPIO_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define MY_RCC_BASE 0x40023800U
#define MY_GPIOA 0x40020000U
#define MY_GPIOB 0x40020400U
#define MY_GPIOC 0x40020800U
#define MY_GPIOD 0x40020C00U
#define MY_GPIOE 0x40021000U
#define MY_GPIOF 0x40021400U
#define RCC_AHB1_OFFSET 0x30
#define GPIO_MODER_OFFSET 0x00
#define GPIO_IDR_OFFSET 0x10
#define GPIO_ODR_OFFSET 0x14
#define GPIO_PUPDR_OFFSET 0x0C
#define GPIO_OSPEEDR_OFFSET 0x08
#define GPIO_OTYPER_OFFSET 0x04
#define GPIO_AFRL_OFFSET 0x20
#define GPIO_AFRH_OFFSET 0x24
#define INPUT_MODE 0
#define OUTPUT_MODE 1
#define ALTERANTE_FUNCTION 2
#define ANALOG 3
#define MY_NO_PULL 0
#define MY_PULL_UP 1
#define MY_PULL_DOWN 2
#define MY_RCC_AHB1_ENABLE (*(volatile uint32_t *) (MY_RCC_BASE + RCC_AHB1_OFFSET))
#define GPIO_REG(port,offset) (*(volatile uint32_t *)(port + offset))
#define GPIO_OTYPER(port) GPIO_REG(port,GPIO_OTYPER_OFFSET)
#define GPIO_MODER(port) GPIO_REG(port,GPIO_MODER_OFFSET)
#define GPIO_IDR(port) GPIO_REG(port,GPIO_IDR_OFFSET)
#define GPIO_PUPDR(port) GPIO_REG(port , GPIO_PUPDR_OFFSET)
#define GPIO_OSPEEDR(port) GPIO_REG(port , GPIO_OSPEEDR_OFFSET)
#define GPIO_ODR(port) GPIO_REG(port,GPIO_ODR_OFFSET)
#define GPIO_AFRL(port) GPIO_REG(port,GPIO_AFRL_OFFSET)
#define GPIO_AFRH(port) GPIO_REG(port , GPIO_AFRH_OFFSET)
void Init_GPIO_MODE(uint32_t,uint32_t,uint32_t);
void Init_CLK(uint32_t);
void SET_PULLUP_PULLDOWN (uint32_t,uint32_t,uint32_t);
void MY_SET_BIT(uint32_t,uint32_t);
void MY_CLEAR_BIT(uint32_t,uint32_t);
void MY_TOGGLE_BIT(uint32_t,uint32_t);
void SET_BITS(uint32_t , uint16_t );
void CLEAR_BITS(uint32_t , uint16_t);
void TOGGLE_BITS(uint32_t, uint16_t);
#endif
