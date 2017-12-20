// 41EnhancedForLoop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	//First
	auto texts = { "one","two","three" };
	for (auto text : texts)
	{
		cout << text << endl;
	}

	//Second
	vector<int> numbers(4,10);
	for (auto number : numbers)
	{
		cout << number << endl;
	}
	
	//Third
	string etc = "Hello";
	for (auto c : etc)
	{
		cout << c << endl;
	}
    return 0;
}

