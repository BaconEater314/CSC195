// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void funcl() {
    bool b = true;
    int i = 5;
}

void funcl2() {
    bool b = false;
    float f = 10;

    funcl();
}

void funcl3() {
    int i[100000];
    //funcl3();
}

class Animal {

public:
    Animal(string name) {
        animalName = name;
    }

    string getName() {
        return animalName;
    }

private:
    string animalName;
};

int main(){
    int i = 5;
    float f = 4.5f;

    //funcl();
    //funcl2();
    //funcl3();

    int* p = new int(5);
    cout << *p << endl;
    delete p;

    //pee is stored in the balls
    string* theBalls = new string("pee");
    cout << *theBalls << endl;
    delete theBalls;

    Animal* cat = new Animal("Cat");
    cout << cat->getName() << endl;
    delete cat;

    int* block = (int*)malloc(sizeof(int) * 1000);
    block[0] = 3;
    block[1] = 4;
    block[2] = 5;
    block[3] = 6;

    block++;
    cout << block + 2 << endl;
    free(--block);
}

