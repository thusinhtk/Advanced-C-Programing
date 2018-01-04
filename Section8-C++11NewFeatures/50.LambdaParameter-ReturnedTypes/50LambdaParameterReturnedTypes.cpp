// 50LambdaParameterReturnedTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void test(void(*pGreet)(string))
{
	pGreet("Hoa");
}

void runDivide(int(*pDivide)(int a, int b))
{
	auto pValue = pDivide(1, 1);
	cout << pValue << endl;
}

int main()
{
	auto pGreet = [](string name) {cout << "Hello: " << name << endl; };
	pGreet("Phuong");
	test(pGreet);

	auto divide = [](int a, int b)->int {
		if (b == 0)
		{
			cout << "Error serious!!!" << endl;
			return 0;
		}
		return a / b;
	};
	cout << static_cast<int>(divide(4, 2)) << endl;

	runDivide(divide);


	return 0;
}

