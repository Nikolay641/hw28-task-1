#include <iostream>
#include "Car.h"
#include "Truck.h"

int main()
{
    Car a("Man", "White", 600, 21.8);
    Truck b(40, a);
    b.showInfo();
    cout << endl;
    cout << "Cost: " << b.calcPriceForTon(30.2) << " money" << endl;
}