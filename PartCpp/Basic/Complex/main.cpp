#include <iostream>

#include "Complex.h"

// using namespace std;

int main() {
    Complex x(2, 7);
    Complex y(3, 8);
    Complex z;

    // std::cout << << std::endl;
    // l operator==(const Complex& other) const;
    // bool operator!=(const Complex& other) const;
    // void operator+=(const Complex& other);
    // void operator-=(const Complex& other);
    // Complex operator+(const Complex& other) const;
    // Complex operator-(const Complex& other) const;
    // Complex 
    std::cout << x << " == " << y << " = " << (x == y) << std::endl;
    std::cout << x << " != " << y << " = " << (x != y) << std::endl;

    std::cout << x << " + " << y << " = " << (x + y) << std::endl;
    std::cout << x << " - " << y << " = " << (x - y) << std::endl;
    std::cout << x << " * " << y << " = " << (x * y) << std::endl;

    std::cout << "z = x + y\n" << (x + y) << std::endl;
    
    y -= Complex(3, 3);
    std::cout << "y -= Complex(3, 3)\nResult: " << y << std::endl;
    x += Complex(3, 3);
    std::cout << "x += Complex(3, 3)\nResult: " << x << std::endl;

    return 0;
}
