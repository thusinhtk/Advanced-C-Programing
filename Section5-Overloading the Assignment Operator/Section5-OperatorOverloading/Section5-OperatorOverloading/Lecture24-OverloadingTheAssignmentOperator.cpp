// Lecture24-OverloadingTheAssignmentOperator.cpp : Defines the entry point for the console application.
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

	Test(int id, string name) :id(id), name(name) {}

	void print() {
		cout << id << ": " << name << endl;
	}

	const Test operator = (const Test &other) {
		cout << "Assignment running" << endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test &other) {
		cout << "Coppy contructor running" << endl;
		id = other.id;
		name = other.name;

		/**this = other;*/
	}
};

int main()
{
	Test test1(1, "Phuong");
	cout << "Print test 1" << endl;
	test1.print();

	Test test2(2, "Hau");
	test2 = test1;
	cout << "Print test 2" << endl;
	test2.print();

	Test test3;
	test3.operator=(test2);
	cout << "Print test 3" << endl;
	test3.print();

	Test test4 = test1;
	cout << "Print test 4" << endl;
	test4.print();

    return 0;
}

