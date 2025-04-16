// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include <vector>
#include "School.h"
#include <vector>
using namespace std;

int main(){
    School school;

    bool quit = false;
    while (!quit) {
        //dispaly menu
        cout << "1) Add Human\n";
        cout << "2) Display All Humans\n";
        cout << "3) Display Human of Type\n";
        cout << "4) Quit\n";

        unsigned short selection;
        cin >> selection;

        switch (selection){
        case 1:
            cout << "1) Student\n";
            cout << "1) Not Student\n";
            unsigned short choice;
            cin >> choice;
            //school.Add(static_cast<Human>::type > (choice - 1);
            //school.Add(Human::type::STUDENT);
            break;
        case 2:
            //school.DisplayAll();
            break;
        case 3:
            break;
        case 4:
            quit = true;
            break;
        default:
            break;
        }

    }

    
    
}