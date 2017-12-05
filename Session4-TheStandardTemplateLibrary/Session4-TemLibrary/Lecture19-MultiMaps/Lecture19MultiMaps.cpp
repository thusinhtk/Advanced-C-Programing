// Lecture19MultiMaps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	multimap<int, string> lookup;

	lookup.insert(make_pair(24, "Phuong"));
	lookup.insert(make_pair(24, "Thang"));
	lookup.insert(make_pair(25, "Hung"));
	lookup.insert(make_pair(26, "Tra"));
	lookup.insert(make_pair(26, "Hau"));
	lookup.insert(make_pair(27, "Linh"));

	for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}
	cout << "------------------------------" << endl;
	// search item start with number key
	for (multimap<int, string>::iterator it = lookup.find(26); it != lookup.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}
	cout << "------------------------------" << endl;

	//get list item with number key: way 1
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(26);
	for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
	{
		cout << it->first << ": " << it->second << endl;
	}
	cout << "------------------------------" << endl;

	// get list item with number key : way 2
	auto it2s = lookup.equal_range(26);
	for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
	{
		cout << it->first << ": " << it->second << endl;
	}
	cout << "------------------------------" << endl;




    return 0;
}

