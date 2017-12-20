// Section8C11NewFeatures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;
int main()
{
	string value;
	
	decltype(value) name = "text demo";

	cout << typeid(value).name() << endl;

	cout << name << endl;

    return 0;
}


