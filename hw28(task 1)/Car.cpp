#include "Car.h"

Car::Car()
{
	brand = "Empty";
	color = "Empty";
	fuelCapacity = 0;
	literFor100km = 0;
}

Car::Car(string brand, string color, int fuelCapacity, float litersFor100km)
{
	this->brand = brand;
	this->color = color;
	this->fuelCapacity = fuelCapacity;
	this->literFor100km = litersFor100km;
}

void Car::setBrand(string brand)
{
	this->brand = brand;
}

void Car::setColor(string color)
{
	this->color = color;
}

void Car::setFuelCapacity(int fuelCapacity)
{
	this->fuelCapacity = fuelCapacity;
}

void Car::setLiterFor100km(float litersFor100km)
{
	this->literFor100km = litersFor100km;
}

string Car::getBrand() const
{
	return brand;
}

string Car::getColor() const
{
	return color;
}

int Car::getFuelCapacity() const
{
	return fuelCapacity;
}

float Car::getLiterFor100km() const
{
	return literFor100km;
}

float Car::calcDistance() const
{
	return (fuelCapacity / literFor100km)*100;
}

void Car::showInfo() const
{
	cout << "Brand: " << brand << endl;
	cout << "Color: " << color  << endl;
	cout << "Fuel capacity: " << fuelCapacity << endl;
	cout << "Liters for 100 km: " << literFor100km << endl;
}
