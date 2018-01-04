// 49LambdaExpressions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void test(void(*pFunc)())
{
	pFunc();
}

int main()
{
	auto func = []() {cout << "Hello" << endl; };
	func();

	test(func);

	test([]() {cout << "Hello again" << endl; });
    return 0;
}

