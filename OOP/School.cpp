#include "School.h"
#include "Human.h"
#include "Student.h"

School::~School(){
	//for (Human* human : m_humans) {
		//delete human;
	//}
	//m_humans.clear();
}

void School::Add(Human::type type){
	Human* human = nullptr;
	switch (type)
	{
	case Human::type::STUDENT:
		human = new Student;
		break;
	case Human::type::NOT_STUDENT:
		//human = new Student;
		break;
	default:
		break;
	}

	//human->read();
	//m_humans.push_back(human);
}

void School::DisplayAll(){
	//for (Human* human : m_humans) {
		//human->write();
	//}
}
