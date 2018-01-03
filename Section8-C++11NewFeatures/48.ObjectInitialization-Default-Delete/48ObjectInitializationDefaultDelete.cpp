// 48ObjectInitializationDefaultDelete.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Test
{
	int id{ 8 };
	string name{ "Hello" };

public:
	Test() = default;

	Test(const Test &other) = default;

	Test &operator=(const Test &other) = default;
	Test(int id) :id(id) {	}

	void print()
	{
		cout << "id: " << id << " name: " << name << endl;
	}
};

int main()
{
	Test test;
	test.print();

	Test test1(99);
	test1.print();

	Test test2 = test1;
	test2 = test1;
	test2.print();

	return 0;
}

