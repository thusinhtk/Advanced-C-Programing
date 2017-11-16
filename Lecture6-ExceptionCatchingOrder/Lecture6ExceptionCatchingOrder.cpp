// Lecture6ExceptionCatchingOrder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

void GoesWrong()
{
	bool error1 = true;
	bool error2 = false;

	if (error1)
	{
		throw bad_alloc();
	}
	if (error2)
	{
		throw exception();
	}
}

int main()
{
	try
	{
		GoesWrong();
	}
	catch (bad_alloc &e) //before
	{
		cout << "Caugh bad_alloc: " << e.what() << endl;
	}
	catch (exception &e) //catch after child is bad_alloc, etc
	{
		cout << "Caugh exception: " << e.what() << endl;
	}

    return 0;
}

