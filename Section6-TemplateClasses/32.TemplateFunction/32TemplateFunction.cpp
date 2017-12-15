// 32TemplateFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

template<class T>
T printSum(T temp1, T temp2) //or default: T temp2 = 0
{
	return temp1 + temp2;
}
template<class T>
T printSum(T temp1)
{
	return temp1 + 10;
}

int main()
{	
	cout << printSum(5) << endl;

    return 0;
}

