#pragma once
#include "Car.h"
class Truck : public Car
{
	float loadCapacity;
public:
	Truck();
	Truck(float loadCapacity, Car car);

	void setLoadCapacity(float loadCapacity);
	float getLoadCapacity()const;

	float calcPriceForTon(float price)const;
	void showInfo()const;
};

