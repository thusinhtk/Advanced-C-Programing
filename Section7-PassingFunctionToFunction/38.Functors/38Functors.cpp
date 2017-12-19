// 38Functors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct Test
{
	virtual bool operator()(string &test) = 0; //functors ()

	virtual ~Test() {}
};

struct MatchText:public Test
{
	virtual bool operator()(string &test)
	{
		return test == "lion";
	}
};
void check(string &value, Test &test)
{
	if (test(value))
	{
		cout << "Text match" << endl;
	}
	else
	{
		cout << "No match" << endl;
	}
}


int main()
{
	MatchText pred;
	string value = "lion";
	check(value, pred);

    return 0;
}

