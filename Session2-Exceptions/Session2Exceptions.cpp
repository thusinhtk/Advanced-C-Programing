// Session2Exceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void mightGoWrrong()
{
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;

	if (error1)
	{
		throw 0;
	}
	if (error2)
	{
		throw "Some thing else went wrong.";
	}
	if (error3)
	{
		throw string("Some thing else went wrong.");
	}
}

int main()
{
	try
	{
		mightGoWrrong();
	}
	catch (int e)
	{
		cout << "Error code: " << e << endl;
	}
	catch (char const* e)
	{
		cout << "Error message: " << e << endl;
	}
	catch (string e)
	{
		cout << "String error message: " << e << endl;
	}

	cout << "Still running" << endl;
    return 0;
}

