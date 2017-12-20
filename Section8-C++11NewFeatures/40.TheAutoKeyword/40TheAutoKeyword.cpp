// 40TheAutoKeyword.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <typeinfo>
#include <stdlib.h>     /* rand */

using namespace std;

template <class T,class S>

//auto test(T value, S other)
//{
//	return value + other;
//}
//OR
auto test(T value, S other) -> decltype(value + other)
{
	return value + other;
}

int getRandomIntNumber()
{
	return 100;
}

auto test2() -> decltype(getRandomIntNumber())
{
	return getRandomIntNumber();
}

int main()
{
	auto value = 5;
	auto text = "Hello";

	//cout << value << endl;
	cout << test(5, 6) << endl;

	cout << test2() << endl;
    return 0;
}

