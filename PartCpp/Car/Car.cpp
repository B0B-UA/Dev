// #include <iostream>
#include "Car.h"
#include "Point.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
    this->fuelAmount = capacity;
}

Car::~Car() {}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car::getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double distance = destination.distance(location);
    int checkFuel = distance*fuelConsumption;

    if ( checkFuel <= fuelAmount ) {
        location = destination;
        
        fuelAmount -= checkFuel;
    } else {
        throw OutOfFuel();
    }
}

void Car::drive(double x, double y) {
    Point destination;
    destination = Point (x, y);

    double distance = destination.distance(location);
    int checkFuel = distance*fuelConsumption;

    if ( checkFuel <= fuelAmount ) {
        location = destination;
        fuelAmount -= checkFuel;
    } else {
        throw OutOfFuel();
    }
}

void Car::refill(double fuel) {
    if ( fuelAmount < 0 ) {
        fuelAmount = 0;
        throw OutOfFuel();
    }

    if (fuel > fuelCapacity - fuelAmount) {
        fuelAmount = fuelCapacity;
        throw ToMuchFuel();
    } else {
        fuelAmount += fuel;
    }
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    return out << " Model - " << car.getModel() << " Location - " << car.getLocation() << " Amount - " << car.getFuelAmount();
}
