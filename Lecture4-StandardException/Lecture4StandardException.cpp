// Lecture4StandardException.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class CanGoWrong
{
public:
	CanGoWrong() {
		char *pMemory = new char[2147483647]; //maximum 2147483647
		delete[] pMemory;
	}
};

int main()
{
	try
	{
		CanGoWrong wrong;
	}
	catch (bad_alloc &e)
	{
		cout << "Caught error: " << e.what() << endl;
	}

	cout << "Still running" << endl;


    return 0;
}

