// 55DelegatingConstructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Parent
{
	int dogs{ 5 };
	string test{ "Hello" };

public:
	Parent()
	{
		cout << "No parameter parent constructor" << endl;
	}

	Parent(string test)
	{
		cout << "String parent constructor" << endl;
	}
	void print()
	{
		cout << "parent" << endl;
	}
};

class Child :public Parent
{
public:
	Child() :Parent("Hello") {}
};

int main()
{
	Parent parent;
	Child child;
	child.print();

	return 0;
}

