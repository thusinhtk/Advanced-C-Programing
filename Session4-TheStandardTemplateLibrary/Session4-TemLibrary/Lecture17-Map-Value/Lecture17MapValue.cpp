// Lecture17MapValue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

class Person {
#pragma region private declare variables
private:
	string name;
	int age;
#pragma endregion

#pragma region public contructors & method
public:
	//contructor 1
	Person() : 
		name(""), age(0)
	{
		cout << "Running contructor 1!" << endl;
	}
	//contructor 2
	Person(string name, int age):
		name(name),age(age)
	{
		cout << "Running contructor 2!" << endl;
	}
	//contructor 3
	Person(const Person &others) 
	{
		cout << "Running contructor 3!" << endl;
		name = others.name;
		age = others.age;
	}

	void PrintPerson()
	{
		cout << name << " - " << age << endl;
	}
#pragma endregion
};
int main()
{
	map<int, Person> people;
	//way 1
	people[0] = Person("M.Thinh", 56);
	people[1] = Person("K.Minh", 53);
	//way 2	
	people.insert(make_pair(3, Person("Phuong", 24)));

	//Print
	map<int, Person>::iterator it = people.begin();
	while (it != people.end())
	{
		cout << it->first << ":";
		it->second.PrintPerson();
		it++;
	}

    return 0;
}

