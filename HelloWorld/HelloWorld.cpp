// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"
#include <iostream>

using namespace std;


int main() {
    f();

    Student student("Nick");
    student.write();

    unsigned int i = 78;
    cout << i << endl;
    cout << (char)i << endl;

    char c = 'A';
    cout << &c << endl;

    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    
}