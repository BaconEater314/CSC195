#include "Student.h"
#include "Console.h"


void setAge(age_t age) {
	age = age;
}
void Human::read() {
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Enter age: ";
	age = getData<float>();
}
void Human::write() {
	std::cout << "<-----STUDENT----->" << std::endl;
	Human.write();
}