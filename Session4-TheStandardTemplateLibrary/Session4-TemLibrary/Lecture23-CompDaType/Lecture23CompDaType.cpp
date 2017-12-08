// Lecture23CompDaType.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, vector<double>> scores;

	scores["Phuong"].push_back(9);
	scores["Phuong"].push_back(4);
	scores["Phuong"].push_back(2);
	scores["Nhan"].push_back(10);
	scores["Phuong"].push_back(9.5);
	scores["Hoang"].push_back(8);
	 
	for (map<string, vector<double>>::iterator it = scores.begin(); it != scores.end(); it++)
	{
		cout << it->first << ": ";

		vector<double> scoreList = it->second;
		for (int i = 0; i < scoreList.size(); i++)
		{
			cout << static_cast<double>(scoreList[i]) << " ";
		}
		cout << endl;
	}
    return 0;
}

