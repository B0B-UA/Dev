#include "Complex.h"
#include <iostream>
#include <cmath>

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() {};

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return !(this->real == other.real && this->imaginary == other.imaginary);
}

void Complex::operator+=(const Complex& other) {
    this->real += + other.getReal();
    this->imaginary += + other.getImaginary();
}

void Complex::operator-=(const Complex& other) {
    this->real -= - other.getReal();
    this->imaginary -= - other.getImaginary();
}

Complex Complex::operator+(const Complex& other) const {
    Complex result = *this;

    result.real += other.real;
    result.imaginary += other.imaginary;

    return result;
}

Complex Complex::operator-(const Complex& other) const {
    Complex result = *this;

    result.real -= other.real;
    result.imaginary -= other.imaginary;

    return result;
}

Complex Complex::operator*(const Complex& other) const {
    Complex result = *this;

    result.real *= other.real;
    result.imaginary *= other.imaginary;

    return result;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << "( " << complex.getReal()<<(complex.getImaginary() > 0 ? " + " : "" ) << complex.getImaginary() <<"i"<< " )";
    return out;
}
