// Section7PassingFunctionToFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void test(int value)
{
	cout << "Hello world: " << value << endl;
}

int main()
{
	test(01);

	void(*pTest)(int) = test;

	pTest(05);

    return 0;
}

