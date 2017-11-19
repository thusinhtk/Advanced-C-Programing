// Lecture9ParsingTextFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string resource_path = "resources.txt";
	ifstream input;
	input.open(resource_path);

	if (!input.is_open())
	{
		return -1;
	}
	while (input) //OR !input.eof()
	{
		string line;
		getline(input, line, ':');

		int price;
		input >> price;

		input.get();
		input >> ws;

		if (!input)
		{
			break;
		}

		cout << "'" << line << "'" << "'" << price << "'" << endl;
	}
	input.close();

	return 0;
}

