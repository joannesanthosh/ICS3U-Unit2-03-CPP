// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This program calculates the circumference of a circle

#include <cmath>
#include <iostream>

int main() {
    // This function calculates the circumference
    const double TAU = 6.2831853071;
    int radiusOfCircle;
    double CircumferenceOfCircle;

    // input
    std::cout << "Enter the radius of the circle (mm): ";
    std::cin >> radiusOfCircle;

    // process
    CircumferenceOfCircle = TAU * radiusOfCircle;

    // output
    std::cout << "" << std::endl;
    std::cout << "The circumference is " << CircumferenceOfCircle;
    std::cout << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
