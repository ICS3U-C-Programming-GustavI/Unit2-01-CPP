// Copyright (c) 2025 Gustav I All rights reserved.
// Created by: Gustav I
// Created on: Feb 21, 2025
// This program calculates and displays the area and
// perimeter of a rectangle given the user's dimensions.

#include <iostream>

// Use specific declarations instead of 'using namespace std'

// Function to calculate the area and perimeter of a rectangle
void calculateAreaAndPerimeter(double length, double width, double* area,
                               double* perimeter) {
    *area = length * width;
    *perimeter = 2 * (length + width);
}

int main() {
    // User input section
    double length, width;

    std::cout << "Enter the dimensions of the rectangle:" << std::endl;
    std::cout << "Length: ";
    std::cin >> length;

    std::cout << "Width: ";
    std::cin >> width;

    // Variables to store the results
    double area = 0.0, perimeter = 0.0;

    // Calling the function
    calculateAreaAndPerimeter(length, width, &area, &perimeter);

    // Outputting the results
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}
