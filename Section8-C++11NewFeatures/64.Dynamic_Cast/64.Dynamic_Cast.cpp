//============================================================================
// Name        : Dynamic_Cast.cpp
// Author      : PhuongNM9
// Version     :
// Copyright   : Learning in Udemy.com
// Description : Hello World in C++, Ansi-style
//============================================================================

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
	//Parent parent;
	Brother brother;

	Parent *pParent = &brother;
	Brother *pBrother = static_cast<Brother *>(pParent);
	//pBrother->speak();

	if (pBrother == nullptr)
	{
		cout << "Invalid cast";
	}
	else
	{
		cout << pBrother << endl;
	}

    return 0;
}
