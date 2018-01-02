// 47InitalizerLists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

class Test
{
public:
	Test(initializer_list<string> tests)
	{
		for (auto value1 : tests)
		{
			cout << value1 << endl;
		}
	}
	void print(initializer_list<string> lists)
	{
		for (auto value : lists)
		{
			cout << value << endl;
		}
	}
};

int main()
{
	vector<int> test1{ 1, 2, 3, 4 };
	cout << test1[1] << endl;

	Test test({ "one", "two", "three" });

	test.print({ "banana","chile" });

	return 0;
}

