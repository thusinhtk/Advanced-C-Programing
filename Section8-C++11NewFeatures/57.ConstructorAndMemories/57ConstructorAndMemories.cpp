// 57ConstructorAndMemories.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "Constructor" << endl;
	}

	Test(int i)
	{
		cout << "Parameterized" << endl;
	}

	Test(const Test &other)
	{
		cout << "Copy constructor" << endl;
	}

	Test &operator=(const Test &other)
	{
		cout << "asssigment" << endl;
		return *this;
	}

	~Test()
	{
		cout << "Deconstructor" << endl;
	}

	friend ostream &operator<<(ostream &out, const Test &other);
};

ostream &operator<<(ostream &out, const Test &other)
{
	out << "Hello from test";
	return out;
}

Test getTest()
{
	return Test();
}

int main()
{
	Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	return 0;
}

