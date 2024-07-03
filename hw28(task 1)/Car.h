#pragma once
#include <iostream>
#include <string>
using namespace std;
class Car
{
	string brand;
	string color;
	int fuelCapacity;
	float literFor100km;
public:
	Car();
	Car(string brand, string color, int fuelCapacity, float litersFor100km);

	void setBrand(string brand);
	void setColor(string color);
	void setFuelCapacity(int fuelCapacity);
	void setLiterFor100km(float litersFor100km);

	string getBrand()const;
	string getColor()const;
	int getFuelCapacity()const;
	float getLiterFor100km()const;

	float calcDistance()const;
	void showInfo()const;
};

