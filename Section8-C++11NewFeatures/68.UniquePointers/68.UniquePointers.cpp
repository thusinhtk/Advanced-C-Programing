/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: phuong
 *
 * Created on February 7, 2018, 7:03 AM
 */
#include <iostream>
#include <memory>

using namespace std;

class Test {
public:

    Test() 
    {
        cout << "Created" << endl;
    }

    void Greet() 
    {
        cout << "Hello" << endl;
    }

    ~Test() 
    {
        cout << "Destroyed" << endl;
    }
};

class Temp
{
private:
    
    unique_ptr < Test[] > pTest;
    
public:

    Temp() : pTest(new Test[2]) {
    }
};
/*
 * 
 */
int main(int argc, char** argv) {
    Temp temp;
    
    cout << "Finished" << endl;
    return 0;
}

