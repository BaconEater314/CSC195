#include <string>
#include <iostream>
#include "Species.h"

class Tiefling : public Species{
public:
	std::string hornStyle;

	void read(std::ostream& ostream, std::istream& istream) override;
	void write(std::ostream& ostream) override;

	race getRace() override { return race::TIEFLING; }

	void Species::read(std::ostream& ostream, std::istream& istream) override{
		Tiefling::read(ostream, istream); // Call base class Read 
		ostream << "Enter name: ";
		istream >> hornStyle;
	}
};