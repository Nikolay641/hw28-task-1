#include "Truck.h"

Truck::Truck()
{
    loadCapacity = 0;
}

Truck::Truck(float loadCapacity, Car car) : Car(car)
{
    this->loadCapacity = loadCapacity;
}

void Truck::setLoadCapacity(float loadCapacity)
{
    this->loadCapacity = loadCapacity;
}

float Truck::getLoadCapacity() const
{
    return loadCapacity;
}

float Truck::calcPriceForTon(float price) const
{
    return ((getLiterFor100km() / 100) * price)/loadCapacity;
}

void Truck::showInfo() const
{
    Car::showInfo();
    cout << "Load capacity: " << loadCapacity << endl;
}
