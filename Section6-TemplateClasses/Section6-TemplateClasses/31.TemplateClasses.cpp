// Section6TemplateClasses.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template<class T>
class Test
{
private:
	T obj;
public:
	Test(T obj)
	{
		this->obj = obj;
	}

	T getObj()
	{
		return obj;
	}
};

template<class T>
ostream &operator<<(ostream &out,Test<T> &other)
{
	out << other.getObj() << endl;

	return out;
}

int main()
{
	Test<string> test("Hello");

	cout << test << endl;

	return 0;
}

