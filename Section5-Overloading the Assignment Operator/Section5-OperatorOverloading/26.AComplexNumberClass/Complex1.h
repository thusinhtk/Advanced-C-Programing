#pragma once
#include <iostream>

using namespace std;

namespace caveofprogramming
{
	class Complex1
	{
	private:
		double real;
		double imaginary;
	public:
		Complex1();
		~Complex1();
		Complex1(double real, double imaginary);
		Complex1(Complex1 &other);

		const Complex1 &operator=(const Complex1 &other);

		double getReal() const
		{
			return real;
		}

		double getImaginary() const
		{
			return imaginary;
		}
	};

	ostream &operator<<(ostream &out,const Complex1 &c);

} /* caveofprogramming */
