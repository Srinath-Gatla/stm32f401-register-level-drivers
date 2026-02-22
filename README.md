# STM32F401 Register-Level Driver Development

Bare-metal driver development for STM32F401RE (ARM Cortex-M4) using direct
memory-mapped register access without HAL or CMSIS driver libraries.

---

## 🚀 Project Objective

To implement low-level peripheral drivers from scratch in Embedded C
to understand STM32 architecture and hardware-level control.

---

## 🧠 Implemented Drivers

- RCC (AHB1 clock enable)
- GPIO driver
  - Mode configuration
  - Output control
  - Input reading
  - Pull-up / Pull-down configuration
- LED Blink application
- Button controlled LED

---

## 🛠 Target MCU

STM32F401RE  
ARM Cortex-M4

---

## 🏗 Architecture

- Direct register access
- Memory-mapped peripheral control
- RCC clock enable is implemented inside GPIO driver for simplicity.
- No HAL
- No STM32Cube drivers

---

## 📌 Future Improvements

- EXTI (External Interrupt)
- SysTick Timer
- UART Driver
- SPI Driver
- I2C Driver
- Modular driver architecture

---

## 👨‍💻 Author

Srinath Gatla  
Embedded Systems Engineer
