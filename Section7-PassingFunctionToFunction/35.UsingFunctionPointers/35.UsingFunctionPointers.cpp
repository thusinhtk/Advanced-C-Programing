// 35UsingFunctionPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm> // to call count_if function

using namespace std;

bool match(string test)
{
	return test == "two";
	//return test.size() == 3;
}	

int countString(vector<string> &tests, bool(*match)(string test))
{
	int tally = 0;
	for (int i = 0; i < tests.size(); i++)
	{
		if (match(tests[i]))
		{
			tally++;
		}
	}

	return tally;
}

int main()
{
	vector<string> tests;

	tests.push_back("one");
	tests.push_back("two");
	tests.push_back("three");
	tests.push_back("two");
	tests.push_back("four");
	tests.push_back("two");
	tests.push_back("three");

	cout << match("one") << endl;

	//count test string with size (length) == 3
	cout << count_if(tests.begin(), tests.end(), match) << endl;

	cout << countString(tests, match) << endl;

    return 0;
}

