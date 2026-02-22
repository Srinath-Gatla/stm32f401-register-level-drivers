#include "GPIO.h"
void Init_CLK(uint32_t port)
{
MY_RCC_AHB1_ENABLE|=(1<<port);
}
void Init_GPIO_MODE(uint32_t port,uint32_t pin,uint32_t mode)
{
GPIO_MODER(port) &= ~(0x3<<(2 * pin));
GPIO_MODER(port) |= (mode << (2 * pin));
GPIO_OTYPER(port) &= (~(1 << pin));
GPIO_OSPEEDR(port) &= ~(0x3 << (2 * pin));
GPIO_OSPEEDR(port) |= (0x3 << (2 * pin));

}
void SET_PULLUP_PULLDOWN (uint32_t port,uint32_t pupmode, uint32_t pin)
{
GPIO_PUPDR(port) &= ~(0x3<< (2 * pin));
GPIO_PUPDR(port) |=(pupmode << (2 * pin));
}
void MY_SET_BIT (uint32_t port,uint32_t pin)
{
GPIO_ODR(port) |=(1<<pin);
}
void MY_CLEAR_BIT (uint32_t port,uint32_t pin)
{
GPIO_ODR(port) &= (~(1<<pin));
}
void MY_TOGGLE_BIT (uint32_t port , uint32_t pin)
{
GPIO_ODR(port) ^= (1 << pin);
}
void SET_BITS(uint32_t port , uint16_t mask)
{
GPIO_ODR(port) |= mask;
}
void CLEAR_BITS(uint32_t port , uint16_t mask)
{
GPIO_ODR(port) &= ~mask;
}
void TOGGLE_BITS(uint32_t port, uint16_t mask)
{
GPIO_ODR(port) ^= mask;
}
