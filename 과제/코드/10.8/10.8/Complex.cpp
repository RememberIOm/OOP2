#include "Complex.h"

#include <iostream>

Complex::Complex(double realPart, double imaginaryPart)
    : real(realPart), imaginary(imaginaryPart) {}
// addition operator
Complex Complex::operator+(const Complex& operand2) const {
    return Complex(real + operand2.real, imaginary + operand2.imaginary);
}
// subtraction operator
Complex Complex::operator-(const Complex& operand2) const {
    return Complex(real - operand2.real, imaginary - operand2.imaginary);
}
// multiplication operator
Complex Complex::operator*(const Complex& operand2) const {
    return Complex(real * operand2.real, imaginary * operand2.imaginary);
}
bool Complex::operator==(const Complex& c) const {
    return (real == c.real && imaginary == c.imaginary);
}
bool Complex::operator!=(const Complex& c) const { return !(*(this) == c); }
// IO OPERATORS
std::ostream& operator<<(std::ostream& out, const Complex& c) {
    out << '(' << c.real << ", " << c.imaginary << ')';

    return out;
}
std::istream& operator>>(std::istream& in, Complex& c) {
    in >> c.real >> c.imaginary;

    return in;
}