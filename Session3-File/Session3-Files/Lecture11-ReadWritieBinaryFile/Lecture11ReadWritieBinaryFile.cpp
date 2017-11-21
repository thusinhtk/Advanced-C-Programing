// Lecture11ReadWritieBinaryFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;
#pragma pack(push,1) // exact fit - no padding
//#pragma pack(pop)
struct  Person
{
	char name[50];
	int age;
	double weight;
};


int main()
{
	///////write binary///////////////////////
	Person someone = { "Nguyen Kim Hau",26,45.2 };
	string fileName = "test.bin";

	ofstream outputFile;
	outputFile.open(fileName, ios::binary);

	if (outputFile.is_open())
	{
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
		cout << "Wrote done." << endl;
	}
	else
	{
		cout << "Couldn't write file bin.";
	}
	///////read binary///////////////////////
	Person soneoneElse = {};
	string inputFileName = "test.bin";

	ifstream inputFile;
	inputFile.open(inputFileName, ios::binary);
	if (inputFile.is_open())
	{
		inputFile.read(reinterpret_cast<char *>(&soneoneElse), sizeof(Person));

		inputFile.close();
		cout << "Read done." << endl;
	}
	else
	{
		cout << "Couldn't read file " << endl;
	}
	cout << soneoneElse.name << " - " << soneoneElse.age << " - " << soneoneElse.weight << endl;
	
    return 0;
}

