// Lecture18MapKeys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

class Person {

private:
	string name;
	int age;

public:
	//contructor 1
	Person() :
		name(""), age(0) {
		//cout << "Running contructor 1!" << endl;
	}
	//contructor 2
	Person(string name, int age) :
		name(name), age(age) {
		//cout << "Running contructor 2!" << endl;
	}
	//contructor 3
	Person(const Person &others) {
		//cout << "Running contructor 3!" << endl;
		name = others.name;
		age = others.age;
	}

	void PrintPerson() const {
		cout << name << " - " << age;
	}

	bool operator < (const Person &other) const {
		if (name == other.name)
		{
			return age < other.age;
		}
		else
			return name < other.name;
	}
};
int main()
{
	map<Person, int> people;
	//way 1
	people[Person("M.Thinh", 56)] = 0;
	people[Person("K.Minh", 53)] = 1;
	//way 2	
	people.insert(make_pair(Person("Phuong", 24), 3));
	//people.insert(make_pair(Person("Phuong", 24), 3)); //duplicate

	//Print
	map<Person, int >::iterator it = people.begin();
	while (it != people.end())
	{
		it->first.PrintPerson();
		cout << " , value: " << it->second << endl;
		it++;
	}

	return 0;
}
