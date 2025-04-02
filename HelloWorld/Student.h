#pragma once

#include <string>

void f();

class Student {
public:
	Student() {}

	Student(std::string name) {
		setName(name);
	}

	void write();
	std::string getName() { return studentName; }
	

private:
	std::string studentName;
	void setName(std::string name) { studentName = name; }
};
