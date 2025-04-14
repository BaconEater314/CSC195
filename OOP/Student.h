#pragma once

#include <iostream>
#include "Human.h"

using namespace std;

class Student : public Human {
public:
    Student() {
        cout << "student constructor" << endl;
    }
    Student(string name, unsigned short age, float gpa) {
        Human(name, age);
        setGPA(gpa);
        cout << "student constructor" << endl;
    }

    void setGPA(float gpa) { gpa = gpa; }
    float getGPA() { return gpa; }
private:
    float gpa = 4.0f;

};