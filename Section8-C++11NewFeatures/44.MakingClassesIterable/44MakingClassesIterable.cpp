// 44MakingClassesIterable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ring2.h"

int main()
{
	ring2<string> testString(4);
	testString.add("one");
	testString.add("two");
	testString.add("three");
	testString.add("four");

	//for (int i = 0; i < testString.size(); ++i)
	//{
	//	cout << testString.get(i) << endl;
	//}

	// C++ 98 
	ring2<string>::iterator it = testString.begin();
	while (it != testString.end())
	{
		cout << *it << endl;
		it++;
	}

	
	/*for (ring2<string>::iterator it = testString.begin(); it != testString.end(); it++)
	{
		cout << *it << endl;
	}*/

	return 0;
}

