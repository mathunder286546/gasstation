#pragma once
#include "main.h"

class truck
{
private:
	int tank;
	int weight;

public:
	truck():tank(0),weight(0) {}


	int getTank();
	int getWeight();
	void setTank();
	void setWeight();
};