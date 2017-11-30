// Lecture16Map.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, int> families;
	//----------------------------------------------------
	families["M.Thinh"] = 1961;
	families["K.Minh"] = 1965;
	families["K.Hau"] = 1991;
	families["M.Phuong"] = 1993;

	// Duplicate key to edit families which key "M.Phuong"
	families["M.Phuong"] = 1994;

	//----------------------------------------------------
	//	Add new item
	//	way1:
	pair<string, int> addToMap("M.Duc", 1937);
	families.insert(addToMap);
	// way2:
	families.insert(make_pair("BaNoi", INT16_MAX));
	//----------------------------------------------------

	// Print map
	// way1
	for (map<string, int>::iterator it = families.begin(); it != families.end(); it++)
	{
		cout << it->first << it->second << endl;
	}
	//way2
	for (map<string, int>::iterator it2 = families.begin(); it2 != families.end(); it2++)
	{
		pair<string, int> memberInFamilies = *it2;

		cout << '\t' << memberInFamilies.first << memberInFamilies.second << endl;
	}
	//Happy coding

	return 0;
}

