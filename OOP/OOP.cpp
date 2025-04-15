// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Student.h"
#include <vector>

int main(){
    //Human nick = Human("nick", 19);
    //nick.printDetails();
    //cout << sizeof(string) << endl;
    //cout << sizeof(Student) << endl;

    vector<Human*> school;
    school.push_back(new Student{"Joe",19,4.0f});
    school.push_back(new Student{"Steve", 45, 2.1f});
    school.push_back(new Student{"Man", 3, 5.1f});

    for (int i = 0; i < school.size(); i++) {
        if (school[i]->getType() == Human::type::STUDENT) {
            cout << dynamic_cast<Student*>(school[i])->getGPA() << endl;
        }
        
    }

    Student* student = new Student{"Bob", 21, 4.0f};

    //Student student1("Nick", 19, 3.5f);
    cout << student->getName() << endl;
    cout << student->getAge() << endl;
    // << static_cast<int>(student->getType()) << endl;

    delete student;
}