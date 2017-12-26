// 46InitializationC11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int values1{};
	cout << values1 << endl;

	int values{ 5 };
	cout << values << endl;

	int number1[3]{};
	cout << number1[2] << endl;

	string text{ "Hello" };
	cout << text << endl;

	int numbers[]{ 1,2,3,4,5 };
	cout << numbers[2] << endl;

	int *pInt = new int[3]{ 1,2,3 };
	cout << pInt[2] << endl;
	delete pInt;

	int *pSomething{}; // equivalent to int *pSomething = nullptr
	cout << pSomething << endl;

	struct
	{
		string text;
		int id;
	}s1 = { "Hello struct", 01 };
	cout << s1.text << endl;

	vector<string> strings{ "One","Two","Three" };
	for (string str : strings)
	{
		cout << str << endl;
	}

    return 0;
}

