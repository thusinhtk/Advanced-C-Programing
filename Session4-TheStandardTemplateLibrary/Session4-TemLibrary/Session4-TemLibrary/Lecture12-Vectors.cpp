// Session4TemLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> nameOfMemberInYourFamily;

	nameOfMemberInYourFamily.push_back("Nguyen Minh Thinh");
	nameOfMemberInYourFamily.push_back("Huynh Thi Kim Minh");
	nameOfMemberInYourFamily.push_back("Nguyen Kim Hau");
	nameOfMemberInYourFamily.push_back("Nguyen Minh Phuong");

	//Normarl
	for (int i = 0; i < nameOfMemberInYourFamily.size(); i++)
	{
		cout << nameOfMemberInYourFamily[i] << endl;
	}
	//Read by iterator from memmoris
	for (vector<string>::iterator it = nameOfMemberInYourFamily.begin(); it != nameOfMemberInYourFamily.end(); it++)
	{
		cout << *it << endl;
	}
	//Increment iterator

	vector< string>::iterator it = nameOfMemberInYourFamily.begin();
	it += 2;
	cout << *it << endl;

    return 0;
}

