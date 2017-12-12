// 27OverloadingPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex.h"

using namespace caveofprogramming;

int main()
{
	Complex c1(2, 3);

	Complex c2 = c1;

	cout << c1 + c2 << endl;

    return 0;
}

