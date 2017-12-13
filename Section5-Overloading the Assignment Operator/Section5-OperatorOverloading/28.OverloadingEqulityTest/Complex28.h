#pragma once
#include <iostream>
using namespace std;

namespace caveofprogramming
{
	class Complex
	{
	private:
		int real;
		int imaginary;
	public:
		Complex();
		~Complex();
		Complex(int real, int imaginary);
		Complex(const Complex &other);
		const Complex &operator=(const Complex &other);

		int getReal() const
		{
			return real;
		}
		int getImaginary() const
		{
			return imaginary;
		}
		bool operator==(const Complex &other) const;
		bool operator!=(const Complex &other) const;
	};

	ostream &operator<<(ostream &out, const Complex &other);
	Complex &operator+(const Complex &c1, const Complex &c2);
	Complex &operator+(const Complex &c1, int numberToPlus);
	Complex &operator+(int numberToPlus, const Complex &c1);

} /* caveofprogramming */

