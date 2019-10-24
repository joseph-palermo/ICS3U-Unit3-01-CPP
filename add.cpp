// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program adds integers

#include <iostream>

int main() {
    // this program adds integers

    // variables
    int numberOne;
    int numberTwo;
    int numberThree;

    // input
    std::cout << "Enter the value of number one: ";
    std::cin >> numberOne;
    std::cout << "" << std::endl;
    std::cout << "Enter the value of number two: ";
    std::cin >> numberTwo;

    // process
    numberThree = numberOne + numberTwo;

    // output
    std::cout << "" << std::endl;
    std::cout << "The total is " << numberThree << std::endl;
}
