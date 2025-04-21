#pragma once

#include <iostream>
#include <vector>
using namespace std;


using age_t = unsigned short;

class Human {
public:
    enum class type : unsigned char {
        STUDENT,
        NOT_STUDENT
    };
    Human() {
        cout << "Human constructor" << endl;
        count++;
    }
    Human(string word, age_t num) {
        name = word;
        age = num;

        cout << "Human constructor" << endl;
        count++;
    }

    void printDetails() {
        cout << name << endl;
        cout << age << endl;
    }

    virtual type getType() = 0;

    static int getCount() { return count; }

    string getName() { return name; }
    age_t getAge() { return age; }

    ~Human() {
        cout << "Human destructor" << endl;
    }

    //vector<Human> m_humans = vector<>;
   
    string name;

    virtual void read();
    virtual void write();
    unsigned short age = 0;

protected:
    static int count;
    static const float tax;
    void setAge(age_t age) { age = age; }
};
