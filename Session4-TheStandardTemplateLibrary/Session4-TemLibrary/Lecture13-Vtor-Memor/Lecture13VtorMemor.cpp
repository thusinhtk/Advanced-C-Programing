// Lecture13VtorMemor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	return 0;
	vector<long double> number(10,DBL_MAX);

	int capacity = number.capacity();

	for (int i = 0; i < 10000; i++)
	{
		if (number.capacity() != capacity)
		{
			capacity = number.capacity();

			cout << "Capacity:" << capacity << endl;
		}
		number.push_back(i);
	}
	//number.reserve(10); // Because current capacity (number.capacity()) is bigger than number of reserve  setting, so it cannot changes.
	number.reserve(100000);
	cout << number[2] << endl;
	cout << "Size" << number.size() << endl;
	cout << "Capacity" << number.capacity() << endl;

    return 0;
}

