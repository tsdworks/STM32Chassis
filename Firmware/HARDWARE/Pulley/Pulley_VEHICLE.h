#ifndef __PULLEY_VEHICLE_H
#define __PULLEY_VEHICLE_H
#include <sys.h>
#include <IOManager.h>
#include <Pulley_SERVO.h>

#define PULLEY_VEHICLE_A 0
#define PULLEY_VEHICLE_B 1
#define PULLEY_VEHICLE_C 2

#define PULLEY_VEHICLE_A_SERVO 1
#define PULLEY_VEHICLE_A_SERVO_DEFANG 90
#define PULLEY_VEHICLE_B_SERVO 5
#define PULLEY_VEHICLE_B_SERVO_DEFANG 90
#define PULLEY_VEHICLE_C_SERVO_1 6
#define PULLEY_VEHICLE_C_SERVO_2 7
#define PULLEY_VEHICLE_C_SERVO_1_DEFANG 90
#define PULLEY_VEHICLE_C_SERVO_2_DEFANG 90

//VEHICLE A
#define PULLEY_VEHICLE_A_AIN1_GROUP GPIOD
#define PULLEY_VEHICLE_A_AIN1_CLK RCC_AHB1Periph_GPIOD
#define PULLEY_VEHICLE_A_AIN1 GPIO_Pin_9
#define PULLEY_VEHICLE_A_AIN2_GROUP GPIOB
#define PULLEY_VEHICLE_A_AIN2_CLK RCC_AHB1Periph_GPIOB
#define PULLEY_VEHICLE_A_AIN2 GPIO_Pin_14
#define PULLEY_VEHICLE_A_PWMA_GROUP GPIOB
#define PULLEY_VEHICLE_A_PWMA_CLK RCC_AHB1Periph_GPIOB
#define PULLEY_VEHICLE_A_PWMA GPIO_Pin_15
#define PULLEY_VEHICLE_A_BIN1_GROUP GPIOD
#define PULLEY_VEHICLE_A_BIN1_CLK RCC_AHB1Periph_GPIOD
#define PULLEY_VEHICLE_A_BIN1 GPIO_Pin_8
#define PULLEY_VEHICLE_A_BIN2_GROUP GPIOD
#define PULLEY_VEHICLE_A_BIN2_CLK RCC_AHB1Periph_GPIOD
#define PULLEY_VEHICLE_A_BIN2 GPIO_Pin_11
#define PULLEY_VEHICLE_A_PWMB_GROUP GPIOD
#define PULLEY_VEHICLE_A_PWMB_CLK RCC_AHB1Periph_GPIOD
#define PULLEY_VEHICLE_A_PWMB GPIO_Pin_10
//VEHICLE B
#define PULLEY_VEHICLE_B_AIN1_GROUP GPIOF
#define PULLEY_VEHICLE_B_AIN1_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_B_AIN1 GPIO_Pin_2
#define PULLEY_VEHICLE_B_AIN2_GROUP GPIOF
#define PULLEY_VEHICLE_B_AIN2_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_B_AIN2 GPIO_Pin_3
#define PULLEY_VEHICLE_B_PWMA_GROUP GPIOF
#define PULLEY_VEHICLE_B_PWMA_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_B_PWMA GPIO_Pin_4
#define PULLEY_VEHICLE_B_BIN1_GROUP GPIOF
#define PULLEY_VEHICLE_B_BIN1_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_B_BIN1 GPIO_Pin_1
#define PULLEY_VEHICLE_B_BIN2_GROUP GPIOF
#define PULLEY_VEHICLE_B_BIN2_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_B_BIN2 GPIO_Pin_0
#define PULLEY_VEHICLE_B_PWMB_GROUP GPIOC
#define PULLEY_VEHICLE_B_PWMB_CLK RCC_AHB1Periph_GPIOC
#define PULLEY_VEHICLE_B_PWMB GPIO_Pin_13
//VEHICLE C
#define PULLEY_VEHICLE_C_AIN1_GROUP GPIOF
#define PULLEY_VEHICLE_C_AIN1_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_C_AIN1 GPIO_Pin_8
#define PULLEY_VEHICLE_C_AIN2_GROUP GPIOF
#define PULLEY_VEHICLE_C_AIN2_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_C_AIN2 GPIO_Pin_9
#define PULLEY_VEHICLE_C_PWMA_GROUP GPIOF
#define PULLEY_VEHICLE_C_PWMA_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_C_PWMA GPIO_Pin_10
#define PULLEY_VEHICLE_C_BIN1_GROUP GPIOF
#define PULLEY_VEHICLE_C_BIN1_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_C_BIN1 GPIO_Pin_7
#define PULLEY_VEHICLE_C_BIN2_GROUP GPIOF
#define PULLEY_VEHICLE_C_BIN2_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_C_BIN2 GPIO_Pin_6
#define PULLEY_VEHICLE_C_PWMB_GROUP GPIOF
#define PULLEY_VEHICLE_C_PWMB_CLK RCC_AHB1Periph_GPIOF
#define PULLEY_VEHICLE_C_PWMB GPIO_Pin_5

#define PULLEY_VEHICLE_FORWARD 0
#define PULLEY_VEHICLE_IDLE 1
#define PULLEY_VEHICLE_BACKWARD 2
#define PULLEY_VEHICLE_TURNLEFT 3
#define PULLEY_VEHICLE_TURNRIGHT 4
extern u8 Pulley_VEHICLE_A_State;
extern u8 Pulley_VEHICLE_B_State;
extern u8 Pulley_VEHICLE_C_State;
extern u8 Pulley_VEHICLE_A_ServoAngle;
extern u8 Pulley_VEHICLE_B_ServoAngle;
extern u8 Pulley_VEHICLE_C_Servo_1_Angle;
extern u8 Pulley_VEHICLE_C_Servo_2_Angle;
void Pulley_VEHICLE_Init(void);
void Pulley_VEHICLE_Run(u8 vehicleID, u8 vehicleState);
void Pulley_VEHICLE_C_HookRotate(void);
#endif
