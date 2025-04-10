// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void funcl(int* p) {
    if (p) *p = 5;
}

int main()
{
    int i = 5;
    int* pointer = &i;
    pointer = nullptr;
    funcl(pointer);

    int& r1 = i;
    r1 = 10;
}
