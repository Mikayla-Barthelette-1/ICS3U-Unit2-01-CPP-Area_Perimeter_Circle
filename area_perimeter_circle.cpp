// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program calculates the area and perimeter of a circle
// with a 15 mm radius

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter
    std::cout << "If a circle has a radius of: " << std::endl;
    std::cout << "15 mm" << std::endl;
    std::cout << std::endl;
    std::cout << "The area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "The perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
