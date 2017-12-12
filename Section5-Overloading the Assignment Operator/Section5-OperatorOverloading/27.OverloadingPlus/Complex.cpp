#include "stdafx.h"
#include "Complex.h"

namespace caveofprogramming
{
	ostream &operator<<(ostream &out, const Complex &other)
	{
		out << "(" << other.getReal() << ", " << other.getImaginary() << ")";
		return out;
	}

	Complex &operator+(const Complex &c1, const Complex &c2)
	{
		return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
	}

	Complex &operator+(const Complex &c1, int numberToPlus)
	{
		return Complex(c1.getReal() + numberToPlus, c1.getImaginary() + numberToPlus);
	}

	Complex &operator+(int numberToPlus, const Complex &c1)
	{
		return Complex(numberToPlus + c1.getReal(), numberToPlus + c1.getImaginary());
	}

	Complex::Complex() :real(0), imaginary(0)
	{
	}

	Complex::~Complex()
	{
	}

	Complex::Complex(int real, int imaginary) :real(real), imaginary(imaginary)
	{
	}

	Complex::Complex(const Complex &other)
	{
		real = other.real;
		imaginary = other.imaginary;
	}

	const Complex &Complex::operator=(const Complex &other)
	{
		real = other.real;
		imaginary = other.imaginary;

		return *this;
	}
}