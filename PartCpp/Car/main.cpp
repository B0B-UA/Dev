#include <iostream>
#include "Car.h"
#include "Point.h"

int main() {
    Point a(1.1, 2.2);
    Point b(3.3 , 4.4);

    Car bmv(100, 0.8, (a), "BMV");
    bmv.drive(80, 80);
    bmv.refill(50);
    bmv.drive(a);

    Car *volvo = new Car(70, 0.7, (a), "Volvo");
    volvo->drive(50.5, 50.5);
    volvo->refill(40);
    volvo->drive(b);

    Car lada(15, 1, b);

    std::cout << Point(50, 50).distance(a) << std::endl;
    std::cout << lada << std::endl;
    std::cout << bmv << std::endl;
    std::cout << *volvo << std::endl;
    std::cout << bmv.getFuelAmount() << std::endl;
    std::cout << volvo->getFuelCapacity() << std::endl;
    return 0;
}