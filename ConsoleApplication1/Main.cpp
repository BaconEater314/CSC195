

#include <iostream>
#include <vector>
//#include "Point.h"
#include <fstream>
#include <string>

#define NAME "Nicholas"
#define PI 3.14159265358979323846264338327950f

using names_t = std::vector<std::string>;



namespace math {
    template<typename T>
    T max(T a, T b) { return (a > b) ? a : b; }
}

void print(const names_t& names) {
    //names[0] = "Kevin";
    for (std::string name : names) {
        std::cout << name << std::endl;
    }
}

template<typename T>
void streamOut(std::ostream& ostream, const T& value){
    ostream << value << std::endl;
}

template<typename T>
void streamIn(std::istream& istream, const T& value) {
    std::getline(istream, value);
}

int main(){
    streamOut(std::cerr, "Hello world.");

    //math::ipoint_t p(4, 5);
    
    std::ofstream fstream("text.txt");
    streamOut(fstream, "Hello");
    fstream.close();

    std::string text;
    std::ifstream ifstream("text.txt");
    if (ifstream.is_open()) {
        streamIn(ifstream, text);
        streamOut(std::cout, text);
    }
    

    std::string text;
    streamIn(std::cin, text);
    streamOut(std::cout, text);
    
    //math::ipoint_t p1(23, 32);
    //math::ipoint_t p2(12, 10);
    //math::ipoint_t p3;
    //p3 = p1 + p2;
    ////std::cout << p1.add(p2) << std::endl;
    //std::cout << p3.getX() << ", " << p3.getY() << std::endl;
    //p3 = p1 - p2;
    //std::cout << p3.getX() << ", " << p3.getY() << std::endl;

    /*std::cout << std::max(10, 6) << std::endl;

    names_t names = { "Joe","Bob","Steve","John","Mike","Nick" };
    names.push_back("Alex");
    print(names);*/
}