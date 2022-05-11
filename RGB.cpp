// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program says every possible RGB value

#include <iostream>
#include <string>

int main() {
    // This function says every possible RGB value
    int counter1;
    int counter2;
    int counter3;

    // Process & Output
    for (counter1 = 0; counter1 <= 255; counter1++) {
        for (counter2 = 0; counter2 <= 255; counter2++) {
            for (counter3 = 0; counter3 <= 255; counter3++) {
                std::cout << "RGB( " << counter1 << ", " << counter2
                << ", " << counter3 << ")" << std::endl;
            }
        }
    }


std::cout << "\nDone" << std::endl;
}
