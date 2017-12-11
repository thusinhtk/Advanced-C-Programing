// 25OverloadingtheLeftBitShiftOperator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() :id(0), name("") {}

	Test(int id, string name) :id(id), name(name) {	}

	void print()
	{
		cout << id << ": " << name << endl;
	}

	friend ostream &operator<<(ostream &out, Test &other)
	{
		out << other.id << ": " << other.name << endl;
		return out;
	}

	const Test &operator=(Test &other)
	{
		cout << "Assignment is running" << endl;
		id = other.id;
		name = other.name;

		return *this;
	}
	Test(const Test &other) {
		cout << "Coppy contructor is running" << endl;
		id = other.id;
		name = other.name;
	}
};

int main()
{
	Test test1(0, "Phuong");
	cout << test1 << endl;

	Test test2(1, "Quynh Anh"); 
	cout << test2 << endl;

	test2 = test1; // Assignment is running
	cout << test2 << endl;

	/*
	/// Coppy contructor is running
	Test test2(test1); 
	cout << test2 << endl;
	*/
	return 0;
}

