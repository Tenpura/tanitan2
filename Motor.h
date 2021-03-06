/**
 * @file Motor.h
 */

#ifndef INCLUDED_MOTOR_H
#define INCLUDED_MOTOR_H

#include "stm32f4xx.h"

enum class MotorSide : uint8_t{
	LEFT,
	RIGHT,
};

class Motor{
private:
	explicit Motor();

	const uint16_t MAX_PERIOD;

	void setForward(MotorSide);
	void setBackward(MotorSide);
	
public:
	void enable();
	void disable();

	void setDuty(MotorSide, int16_t);

	static Motor* getInstance();
};

#endif
