#pragma once

#include <iostream>
#include <string>

using namespace std;

template <class T>
class ring
{
public:
	class iterator;
};

template <class T>
class ring<T>::iterator
{
public :
	void print()
	{
		cout << "Hello from iterator: " << T() << endl;
	}
};

