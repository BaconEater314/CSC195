#include <iostream>
#include "Fraction.h"
#include <fstream>
#include <string>


template<typename T>
void streamOut(std::ostream& ostream, const T& value) {
    ostream << value << std::endl;
}

template<typename T>
void streamIn(std::istream& istream, const T& value) {
    std::getline(istream, value);
}

int main()
{
    mathlib::Fraction<int> fraction1{ 18, 5 };
    std::cout << fraction1 << std::endl;

    mathlib::Fraction<int> fraction2{ 15, 6 };
    std::cout << fraction2 << std::endl;
    std::cout << "simplify: " << fraction2.simplify(15,6) << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    mathlib::Fraction<int> fraction3;
    std::cout << "input fraction (numerator - denominator): \n";
    //streamIn()
    std::cout << fraction3 << std::endl;
    std::cout << fraction3.toFloat() << std::endl;
} 