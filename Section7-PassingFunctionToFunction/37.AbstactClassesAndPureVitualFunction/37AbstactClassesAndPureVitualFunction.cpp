// 37AbstactClassesAndPureVitualFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<vector>
#include <string>

using namespace std;
/* The virtual function can be overriden and the pure virtual must be implemented.*/
class Animal
{
public:
	//virtual void run(); // can be implemented or not
	virtual void run() = 0; // pure virtual function so set = 0. Must be implemented
	virtual void speak() = 0;
};

class Dog :public Animal
{
public:
	virtual void speak()
	{
		cout << "Woof" << endl;
	}
};

class Labrador :public Dog
{
public:
	Labrador()
	{
		cout << "New labrador" << endl;
	}
	virtual void run()
	{
		cout << "Labrador is running" << endl;
	}
};
void Test(Animal &animal)
{
	animal.run();
}

int main()
{
	Labrador lab;
	lab.run();
	lab.speak();

	Animal *animals[5];
	animals[0] = &lab;
	animals[0]->speak();

	Test(lab);

	return 0;
}
