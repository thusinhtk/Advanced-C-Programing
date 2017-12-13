// 28OverloadingEqulityTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Complex28.h"

using namespace caveofprogramming;

int main()
{
	Complex c1(3, 2);
	Complex c2(1, 2);

	if (c1 == c2)
	{
		cout << "Equals" << endl;
	}
	else
	{
		cout << "Not equals" << endl;
	}

	if (c1 != c2)
	{
		cout << "Not equals" << endl;
	}
	else
	{
		cout << "Equals" << endl;
	}

    return 0;
}

