// 59LValueReferences.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory.h>

using namespace std;

class Test
{
private:
	static const int SIZE = 100;
	int* _pBuffer;
public:
	Test()
	{
		cout << "Constructor" << endl;

		_pBuffer = new int[SIZE] {};
	}

	Test(int i)
	{
		cout << "Parameterized" << endl;

		_pBuffer = new int [SIZE] {};

		for (unsigned i = 0; i < SIZE; ++i)
		{
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other)
	{
		cout << "Copy constructor" << endl;

		_pBuffer = new int [SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test &operator=(const Test &other)
	{
		cout << "asssigment" << endl;

		_pBuffer = new int [SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

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

	Test &rTest1 = test1;
	//Test &rTest2 = getTest();

	const Test &rTest2 = getTest();

	Test test2(Test(1));

	return 0;
}