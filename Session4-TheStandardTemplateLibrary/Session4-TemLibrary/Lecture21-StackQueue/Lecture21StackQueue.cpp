// Lecture21StackQueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

class Test {
private:
	string name;

public:
	Test(string name) :
		name(name) {

	}

	~Test()
	{
		//cout << "Objects destroyed" << endl;
	}	

	void Print() 
	{
		cout << name << endl;
	}
};

int main()
{
	//LIFO
	stack<Test> testStack;

	testStack.push(Test("Phuong"));
	testStack.push(Test("Dep"));
	testStack.push(Test("Nhat"));
	testStack.push(Test("The world"));

	while (testStack.size() > 0)
	{
		Test &test = testStack.top();
		test.Print();
		testStack.pop();
	}

	//FIFO
	queue<Test> testQueue;
	testQueue.push(Test("Hoa"));
	testQueue.push(Test("Hau"));
	testQueue.push(Test("Dep"));
	testQueue.push(Test("Nhat"));

	testQueue.back().Print();

	while (testQueue.size() > 0)
	{
		Test &test = testQueue.front();
		test.Print();
		testQueue.pop();
	}

	return 0;
}