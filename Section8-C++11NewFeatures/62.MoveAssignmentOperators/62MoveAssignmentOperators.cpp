// 62MoveAssignmentOperators.cpp : Defines the entry point for the console application.
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
	int* _pBuffer{ nullptr };
public:
	Test()
	{
		_pBuffer = new int[SIZE] {};
	}

	Test(int i)
	{
		_pBuffer = new int [SIZE] {};

		for (unsigned i = 0; i < SIZE; ++i)
		{
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other)
	{
		_pBuffer = new int [SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test &operator=(const Test &other)
	{
		_pBuffer = new int [SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

		return *this;
	}

	Test &operator=(Test &&other)
	{
		cout << "Move assignment operators" << endl;

		delete[] _pBuffer;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;

		return *this;
	}

	Test(Test &&other)
	{
		cout << "Move constructor" << endl;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
	}

	~Test()
	{
		delete[] _pBuffer;
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
	vector<Test> vec;
	vec.push_back(Test());

	Test test = getTest();
	test = getTest();

	return 0;
}

