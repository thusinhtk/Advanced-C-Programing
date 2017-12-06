
// Lecture20Sets.cpp : Defines the entry point for the console application.
//
//Author: PhuongMN9 from FPT Software HCM
#include "stdafx.h"
#include <iostream>
#include <set>
#include <string>

using namespace std;

class Employee
{
private:
	int id;
	string name;

public:
	Employee() :
		id(0), name("Employee Name"){
	}

	Employee(int id, string name) :
		id(id), name(name) {

	}

	void Print() const
	{
		cout << "Id: " << id << " Name: " << name << endl;
	}

	bool operator <(const Employee &other)const
	{
		if (id == other.id)
		{
			return name < other.name;
		}
		return id < other.id;
	}

};

int main()
{
	cout << "---------------------------Demo for simples-------------------------------" << endl;
	//Demo for simples
	set<int> numbers;

	numbers.insert(10);
	numbers.insert(20);
	numbers.insert(30);
	numbers.insert(30);
	numbers.insert(40);

	//Print list numbers
	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << " ";
		
	}
	cout << endl;
	//Find follow way 1
	set<int>::iterator itFind = numbers.find(30);
	if (itFind != numbers.end()) 
	{
		cout << *itFind << endl;
	}
	//Find follow way 2
	if (numbers.count(30)) 
	{
		cout << "Number found" << endl;
	}

	cout << "---------------------------Demo for complex Way 2 :)-----------------------" << endl;
	set<Employee> employees;

	for (int i = 0; i < 10; ++i)
	{
		employees.insert(Employee(i, "Employee"));
	}

	for (set<Employee>::iterator it = employees.begin(); it != employees.end(); ++it)
	{
		it->Print();
	}
    return 0;
}

