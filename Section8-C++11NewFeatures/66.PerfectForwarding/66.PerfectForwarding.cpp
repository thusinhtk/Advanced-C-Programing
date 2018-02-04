//============================================================================
// Name        : PerfectForwarding.cpp
// Author      : PhuongNM9
// Version     :
// Copyright   : Learning in Udemy.com
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
};

template<typename T>
void call(T &&arg) {
	//check(static_cast<T>(arg));
	check(forward<T>(arg));
}

void check(Test &test) {
	cout << "lvalue" << endl;
}

void check(Test &&test) {
	cout << "rvalue" << endl;
}

int main() {
	Test test;
	call(Test());
	return 0;
}
