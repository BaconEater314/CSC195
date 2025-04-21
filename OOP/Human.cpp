#include "Human.h"
#include "Console.h"
#include <iostream>

int Human::count = 0;
const float Human::tax = 0.0825f;

void func() {
	std::cout << "funky\n";
}
void setAge(age_t age) {
	age = age;
}
void Human::read() {
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter age: ";
	age = getData<age_t>();

}

void Human::write() {
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Age: " << getAge() << std::endl;
}