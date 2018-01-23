// 63StaticCast.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Parent
{
public:
	void speak()
	{
		cout << "Parent!" << endl;
	}
};

class Brother :public Parent
{
public:
	void speak()
	{
		cout << "Brother!" << endl;
	}
};

class Sister :public Parent
{

};

int main()
{
	Parent parent;
	Brother brother;

	double value = 10.9;
	cout << static_cast<int>(value) << endl;

	Parent *pParent = &brother;
	Brother *pBrother = static_cast<Brother *>(pParent);
	//pBrother->speak();
	cout << pBrother << endl;

	Parent &&_pParent = static_cast<Parent &&>(parent);
	_pParent.speak();

    return 0;
}

