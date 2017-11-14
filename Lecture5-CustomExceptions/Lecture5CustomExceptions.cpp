// Lecture5CustomExceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class MyException:public exception {
public:
	virtual const char* what() const throw()
	{
		return "Some bad happened";
	}
};

class Test
{
public:
	void GoesWrong()
	{
		throw MyException();
	}
};

int main()
{
	Test test;
	try
	{
		test.GoesWrong();
	}
	catch (MyException e)
	{
		cout << e.what() << endl;
	}

	cout << "Still running" << endl;
    return 0;
}

