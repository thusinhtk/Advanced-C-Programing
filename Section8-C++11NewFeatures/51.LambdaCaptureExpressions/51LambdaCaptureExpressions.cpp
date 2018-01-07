// 51LambdaCaptureExpressions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int one = 1;
	int two = 2;
	int three = 3;

	// capture one and two by value
	[one, two]() {cout << one << "," << two << endl; }();

	//capture all local variables by value
	[=]() {cout << one << "," << two << endl; }();

	//Default capture all local variables by value, but capture three by reference
	[=, &three]() {three = 13; cout << one << "," << two << "," << three << endl; }();

	//Default capture all local variables by reference
	[&]() {three = 23; two = 22; one = 21; cout << one << "," << two << "," << three << endl; }();

	//Default capture all local variables by reference, but two and three by value
	[&,two, three]() {one=31; cout << one << "," << two << "," << three << endl; }();

    return 0;
}

