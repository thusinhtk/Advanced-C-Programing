// Lecture8ReadTextFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inFileName = "text.txt";

	//Cach 1
	//fstream fInFile;
	//fInFile.open(inFileName, ios::in);

	ifstream inFile;
	inFile.open(inFileName);

	if (inFile.is_open())
	{
		string line;
		while (!inFile.eof()) //OR while (inFile) but not informal @@
		{
			getline(inFile, line);
			cout << line << endl;
		}
		inFile.close();
	}

    return 0;
}

