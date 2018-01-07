// 52CapturingThisWithLambda.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Test
{
private:
	int one{ 1 };
	int two{ 2 };
public:
	void run()
	{
		int three{ 3 };
		int four{ 4 };

		auto pLambda = [&,this]() { 
			/*OR [=]() { OR [this, three, four]() { */
			two = 12;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};


		pLambda();
	}

};


int main()
{
	Test test;
	test.run();

	return 0;
}

