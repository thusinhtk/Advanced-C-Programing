// Session3Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/*
	#pragma region Cách 1
		ofstream outFile;

		string outFileName = "ofstream_Text.txt";

		outFile.open(outFileName); //create text.txt

		if (outFile.is_open())
		{
			outFile << "Hello everyone,  I'm Phuong, from MR Sequence team!" << endl;
			outFile << 120793 << endl;

			outFile.close();
		}
		else
		{
			cout << "Can't creating file: " << endl;
		}
	#pragma endregion
	*/
#pragma region Cách 2
	fstream outFile;

	string outFileName = "fstream_Text.txt";
	outFile.open(outFileName, ios::out);

	if (outFile.is_open())
	{
		outFile << "Hello, I'm Phuong from MR_Sequence team" << endl;
		outFile << "Nice to meet you :)" << endl;
		outFile << 12071993 << endl;

		outFile.close();
	}
	else
	{
		cout << "Can't create file: " << endl;
	}
#pragma endregion

	return 0;
}

