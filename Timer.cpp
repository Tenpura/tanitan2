/*
 * @file Timer.cpp
 */

#include "Timer.h"
#include "MotorControl.h"

__IO int32_t Timer::total = 0;
__IO int32_t Timer::waitnum = 0;


void Timer::wait_ms(__IO int32_t t){
	waitnum = t;
	while(waitnum != 0x00);
}

void Timer::wait_ms_decrement(){
	if(waitnum != 0x00) --waitnum;
	++ total;
}

void Timer::interrupt(){
	wait_ms_decrement();
	static Encoder *encoder = Encoder::getInstance();
	static MotorControl *motor = MotorControl::getInstance();
	encoder->interrupt();
	motor->interrupt();
}
