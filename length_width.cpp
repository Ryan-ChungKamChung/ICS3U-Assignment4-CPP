// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Checks if the inputted lengths and widths form a square

#include <iostream>
#include <string>


int main() {
    // This function checks if the inputted lengths and widths form a square

    std::string lengthString;
    std::string widthString;
    int length;
    int width;

    std::cout << "Give me a length and a width and"
    << "I will tell you if it forms a square!"<< std::endl;

    // Input
    std::cout << "Enter the length: ";
    std::cin >> lengthString;
    std::cout << "Enter the width: ";
    std::cin >> widthString;

    // Process
    try {
        length = std::stoi(lengthString);
        width = std::stoi(widthString);

        if (length <= 0) {
            throw std::invalid_argument(" ");
        }

        if (width <= 0) {
            throw std::invalid_argument(" ");
        }

        if (length == width) {
            // Output
            std::cout << "These 2 measurements form a square!" << std::endl;
        } else {
            // Output
            std::cout << "These 2 measurements do not form a square!"
            << std::endl;
        }
    } catch (std::invalid_argument) {
        // Output
        if (length || width <= 0) {
            std::cout << "Negative or side lengths of 0 are not allowed"
            << std::endl;
        } else {
            std::cout << "One or both of the inputted measurements "
            << "are not valid" << std::endl;
        }
    }
}
