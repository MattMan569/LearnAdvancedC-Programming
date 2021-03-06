#include "Complex.h"



Complex::Complex() : real(0), imaginary(0) {}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

Complex::Complex(const Complex & other)
{
	real = other.real;
	imaginary = other.imaginary;
}


Complex::~Complex() {}

Complex & Complex::operator=(const Complex & other)
{
	real = other.real;
	imaginary = other.imaginary;

	return *this;
}

bool Complex::operator==(const Complex & c)
{
	return (real == c.real && imaginary == c.imaginary);
}

bool Complex::operator!=(const Complex & c)
{
	return !(*this == c);
}

std::ostream & operator<<(std::ostream & out, const Complex & c)
{
	out << "(" << c.getReal() << "," << c.getImaginary() << ")";
	return out;
}

Complex operator+(const Complex & c1, const Complex & c2)
{
	return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}

Complex operator+(const Complex & c, const double & d)
{
	return Complex(c.getReal() + d, c.getImaginary());
}

Complex operator+(const double & d, const Complex & c)
{
	return Complex(c.getReal() + d, c.getImaginary());
}
