// 36ObjectSlicingAndPolymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Parent
{
private:
	int one;

public:
	Parent() :one(0)
	{

	}

	Parent(const Parent &other) :one(0)
	{
		one = other.one;
		cout << "Copy parent" << endl;
	}

	virtual void print()
	{
		cout << "Parent" << endl;
	}

	virtual ~Parent()
	{

	}
};

class Child :public Parent
{
private:
	int two;
public:
	Child() :two(0)
	{

	}

	void print()
	{
		cout << "Child" << endl;
	}
};

int main()
{
	Child c1;
	Parent &p1 = c1;
	p1.print();

	Parent p2 = Child();
	p2.print();

	return 0;
}

