// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Apr, 12, 2022
// This program determines if the year entered is a leap year or not.

#include <iostream>
#include <string>
#include <cmath>


int main() {
    // defines variable
    std::string userYearString;
    int userYearInt;

    // collect input from the user
    std::cout << "Enter a year (ex. 2006): ";
    std::cin >> userYearString;
    std::cout << std::endl;

    try {
        // convert from string to int
        userYearInt = std::stoi(userYearString);

        if (userYearInt < 0) {
            std::cout << "Please enter a valid year.";
        } else if ((userYearInt % 4) == 0) {
            if ((userYearInt % 100) == 0) {
                if ((userYearInt % 400) == 0) {
                    std::cout << "This is a leap year!";
                    std::cout << std::endl;
                    std::cout << "It has 366 days.";
                } else {
                    std::cout << "This is not a leap year.";
                }
            } else {
                std::cout << "This is a leap year.";
                std::cout << std::endl;
                std::cout << "It has 366 days.";
            }
        } else {
            std::cout << "This is not a leap year.";
        }
    // check if user entered a vallid input
    } catch (std::invalid_argument) {
    std::cout << userYearString << " is not a number.\n";
    }
}
