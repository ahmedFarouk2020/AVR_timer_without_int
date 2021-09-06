///*
 //* test_timer_int.c
 //*
 //* Created: 9/5/2021 3:28:47 PM
 //*  Author: Farouk
 //*/ 
//
//// COMMON LIB
//#include "STD_TYPES.h"
//#include "BIT_MATH.h"
//
//#include "DIO_interface.h"
//#include "timer_interface.h"
//
//
////void toggle_led(void)
////{
	////static uint8_t counter = 0;
	////static uint8_t led_state = 0;
	////if (counter % 2 == 0)
	////{
		////DIO_setPinValue(GPIOB, PIN0, led_state);
		////led_state = !led_state;
	////}
	////counter++;
////}
//
//void toggle_led(void)
//{
	//static uint8_t counter_high = 0;
	//static uint8_t counter_low = 0;
	//static uint8_t led_state = 1;
	//static uint8_t state_turn = 1; // 0-> low   1-> high
	//if (state_turn == 1)
	//{
		//// increment counter 
		//counter_high++;
		//// check counter value
		//if (counter_high == 2)
		//{
			//// toggle led
			//led_state = !led_state;
			//DIO_setPinValue(GPIOB, PIN0, led_state);
			//// set period for the other state
			//timer_setInterval(224+7);
			//// reset counter and turn
			//counter_high = 0;
			//state_turn = 0;
			//return ;
		//}
		//// set period
		//timer_setInterval(36);
	//}
	//else
	//{
		//
		//// increment counter
		//counter_low++;
		//// check counter value
		//if (counter_low == 2)
		//{
			//// toggle led
			//led_state = !led_state;
			//DIO_setPinValue(GPIOB, PIN0, led_state);
			//// set period for the other state
			//timer_setInterval(256);
			//// reset counter and turn
			//counter_low = 0;
			//state_turn = 1;
			//return ;
		//}
		//// set period
		//timer_setInterval(256);
	//}
//}
//
//int main(void)
//{
	//// led definition
	//DIO_setPinDirection(GPIOB, PIN0, OUTPUT);
	//DIO_setPinValue(GPIOB, PIN0, HIGH);
	//
	//global_int_enable();
	//timer_enableInterrupt(OVERFLOW_FLAG);
	//
	//// timer configurations
	//timer_init(); // timer mode is nomal
	//timer_setInterval(256); // 266.24 ms
	//timer_setCallback(toggle_led);
	//timer_start(TIMER0); // timer clk = tclk/1024 (timer tick time = 1.04 ms)
    //while(1)
    //{
		//
    //}
//}