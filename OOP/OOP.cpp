// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Student.h"

int main(){
    //Human nick = Human("nick", 19);
    //nick.printDetails();

    Student student1("Nick", 19, 3.5f);
    cout << student1.getName() << endl;
    cout << student1.getAge() << endl;
}
