// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program uses a compound boolean statement

#include <iostream>

int main() {
    // This function uses a compound boolean statement

    std::string name;
    std::string looks;
    std::string salary;

    // input
    std::cout << "Will you be approved by my granny? Answer her questions to "
                 "find out." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "What is your first name sonny boy?: "; std::cin >> name;
    std::cout << "Is your salary 100,000+? (Yes/No): "; std::cin >> salary;
    std::cout << "Do people constantly compliment you on your looks?: ";
    std::cin >> looks;
    std::cout << "" << std::endl;

    // process
    if (salary == "yes" || looks == "yes") {
        std::cout << name << ", you have my approval." << std::endl;
    } else {
        std::cout << "You will never see her again." << std::endl;
    }
}
