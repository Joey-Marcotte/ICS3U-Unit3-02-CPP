// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: Sept 2019
// This program gets user to guess a number
// with user input

#include <iostream>

int main() {
    int numberGuessed;
    const double rightNumber = 5;

    while (true) {
        // input
        std::cout << "Guess a number between 0-9: ";
        std::cin >> numberGuessed;
        if (numberGuessed == rightNumber) {
            std::cout << "You won, you guessed the number" << std::endl;
            break;
        } else {
         (numberGuessed != rightNumber);
            std::cout << "Wrong, try again" << std::endl;
        }
    }
}
