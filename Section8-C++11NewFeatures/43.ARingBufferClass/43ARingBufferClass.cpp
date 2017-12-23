// 43ARingBufferClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ring1.h"

int main()
{
	ring1<string> test(4);
	test.add("one");
	test.add("two");
	test.add("three");
	test.add("four");

	for (int i = 0; i < test.size(); ++i)
	{
		cout << test.get(i) << endl;
	}


    return 0;
}

