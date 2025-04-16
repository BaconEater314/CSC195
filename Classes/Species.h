#pragma once

#include <string>
#include <iostream>


class Species {
public:
	enum class race {
		HUMAN, ELF, HALF_ELF, TIEFLING, DWARF, DRAGONBORN, HALFING, GNOME
	};

	virtual void read(std::ostream& ostream, std::istream& istream);
	virtual void write(std::ostream& ostream);

	std::string getName() { return characterName; }
	
	virtual race getRace() = 0;

	std::string characterName;

private:
	void setName(std::string input) { characterName = input; }
};