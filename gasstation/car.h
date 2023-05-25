#pragma once
#include "main.h"
class car
	private:
		int tank;
		int speed;
		int power;

public:
	car() :tank(0), speed(0), power(0) {}


	int getTank();
	int getPower();
	int getSpeed();
	void setTank();
	void setPower();
	void setSpeed();
};