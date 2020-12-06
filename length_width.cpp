// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Checks if the inputted lengths and widths form a square

#include <iostream>
#include <string>


int main() {
    // This function checks if the inputted lengths and widths form a square

    std::string length_string;
    std::string width_string;
    int length;
    int width;

    std::cout << "Give me a length and a width and"
    << "I will tell you if it forms a square!"<< std::endl;

    // Input
    std::cout << "Enter the length: ";
    std::cin >> length_string;
    std::cout << "Enter the width: ";
    std::cin >> width_string;

    // Process
    try {
        length = std::stoi(length_string);
        width = std::stoi(width_string);

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
        std::cout << "One or both of the inputted measurements "
        << "are not valid" << std::endl;
    }
}
