// Lecture14Vector2D.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> vector2D(4, vector<int>(5, 9));

	for (int row = 0; row < vector2D.size(); row++)
	{
		for (int col = 0; col < vector2D[row].size(); col++)
		{
			cout << vector2D[row][col];// << flush; //hight light
		}
		cout << endl;
	}

	return 0;
}

