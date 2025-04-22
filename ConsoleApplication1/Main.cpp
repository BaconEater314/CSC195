

#include <iostream>
#include <vector>
#include "Point.h"

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

int main(){
    math::ipoint_t p1(23, 32);
    math::ipoint_t p2(12, 10);
    math::ipoint_t p3;
    p3 = p1 + p2;
    //std::cout << p1.add(p2) << std::endl;
    std::cout << p3.getX() << ", " << p3.getY() << std::endl;
    p3 = p1 - p2;
    std::cout << p3.getX() << ", " << p3.getY() << std::endl;

    /*std::cout << std::max(10, 6) << std::endl;

    names_t names = { "Joe","Bob","Steve","John","Mike","Nick" };
    names.push_back("Alex");
    print(names);*/
}