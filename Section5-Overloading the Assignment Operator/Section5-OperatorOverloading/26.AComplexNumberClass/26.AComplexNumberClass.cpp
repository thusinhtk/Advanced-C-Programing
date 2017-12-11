// 26.AComplexNumberClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex1.h"

using namespace caveofprogramming;

int main()
{
	Complex1 c1(4, 9);
	Complex1 c2 = c1;
	c1 = c2;
	cout << c1 << endl;

    return 0;
}

