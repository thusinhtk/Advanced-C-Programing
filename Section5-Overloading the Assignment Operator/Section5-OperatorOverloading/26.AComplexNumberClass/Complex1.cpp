#include "stdafx.h"
#include "Complex1.h"

namespace caveofprogramming
{
	ostream & operator<<(ostream & out, const Complex1 & c)
	{
		out << "(" << c.getReal() << ", " << c.getImaginary() << ")" << endl;
		return out;
	}

	Complex1::Complex1() :real(0), imaginary(0)
	{
	}

	Complex1::~Complex1()
	{
	}

	Complex1::Complex1(double real, double imaginary) :real(real), imaginary(imaginary)
	{
		cout << "Contructor is running" << endl;
	}

	Complex1::Complex1(Complex1 & other)
	{
		real = other.real;
		imaginary = other.imaginary;
	}
	const Complex1 & Complex1::operator=(const Complex1 & other)
	{
		cout << "Copy is running" << endl;
		real = other.real;
		imaginary = other.imaginary;

		return *this;
	}
}
