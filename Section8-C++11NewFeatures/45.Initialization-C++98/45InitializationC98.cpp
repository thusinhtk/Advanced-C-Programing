// 45InitializationC98.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int values[] = { 1,2,4 };
	cout << values[0] << endl;

	class C
	{
	public:
		string text;
		int id;
	};
	C c1 = { "Hello class", 10 };
	cout << c1.text << endl;

	struct S
	{
		string text;
		int id;
	};
	S s1 = { "Hello struct 1", 01 };
	cout << s1.text << endl;

	struct
	{
		string text;
		int id;
	} srtuct2 = { "Hello struct 2", 02 }, srtuct3 = { "Hello struct 3", 03 };
	cout << srtuct2.text << endl;
	cout << srtuct3.text << endl;

    return 0;
}

