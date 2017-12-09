// Lecture22SortVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector> //vector
#include <iostream> //
#include <string> //cout
#include <algorithm> //sort
using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test(int id, string name) : id(id), name(name) {}

	void print()
	{
		cout << id << " - " << name << endl;
	}

	/*bool operator < (const Test &other) const {
		if (id == other.id)
			return name < other.name;
		else
			return id < other.id;
	}*/

	friend bool comp(const Test &first, const Test &second) { // friend to access private variables
		if (first.id == second.id) {
			return first.name < second.name;
		}
		else
			return first.id < second.id;
	}
};



int main()
{
	vector<Test> vectors;

	vectors.push_back(Test(10, "Lan"));
	vectors.push_back(Test(12, "Hoa"));
	vectors.push_back(Test(11, "Hue"));
	vectors.push_back(Test(8, "Nhan"));
	vectors.push_back(Test(20, "Thinh"));

	//Bsort(vectors.begin(), vectors.end()); // call operator

	sort(vectors.begin(),vectors.end(),comp);

	for (int i = 0; i < vectors.size(); i++) {
		vectors[i].print();
	}
    return 0;
}

