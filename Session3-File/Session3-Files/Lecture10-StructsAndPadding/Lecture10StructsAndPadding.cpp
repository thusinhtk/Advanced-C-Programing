// Lecture10StructsAndPadding.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
#pragma pack(push,1) // exact fit - no padding

struct  Person
{
	char name[50];
	int age;
	double weight;
};

//#pragma pack(pop) //back to whatever the previous packing mode was 

int main()
{
	cout << sizeof(Person) << endl;
    return 0;
}

