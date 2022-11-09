// Copyright (c) 2022 Venika Sem All Rights reserved.
//
// Created by: Venika Sem
// Created on: Nov 2022
// This program finds factorial of a number using while loop

#include <iostream>
#include <string>

int positiveInteger;
int loopCounter = 0;
int multiplyInt = 1;

int main() {
    // This function finds factorial of a number using while loop

    // Input

    std::string positiveString;
    std::cout << "Enter a number to find factorial: ";
    std::cin >> positiveString;
    std::cout << std::endl;

    // Process and output
    try {
        positiveInteger = std::stoi(positiveString);
        if (positiveInteger >= 0) {
            do {
                loopCounter = loopCounter + 1;
                multiplyInt = multiplyInt * loopCounter;
            } while (loopCounter < positiveInteger);
            if (loopCounter >= positiveInteger)
                std::cout << "" << positiveInteger << "!"
                          << " = " << multiplyInt << "" << std::endl;
        } else {
            std::cout << "" << positiveString
                      << " is not a positive integer" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "" << positiveString
                  << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone.";
}
