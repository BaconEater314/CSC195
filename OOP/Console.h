#pragma once
#include <iostream>
#include <limits>

// Function that safely reads an int from cin with validation
int getInt();

float getFloat();

template<typename T>
T getData() {
    T x;

    //std::cout << std::numeric_limits<int>::max() << std::endl;

    while (true) {
        std::cin >> x;

        if (std::cin.fail()) {
            std::cin.clear(); // clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input. Please enter a valid number.\n";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush any extra input
            return x;
        }
    }
}
