// Created by: Hiab G
// Date: Wed, Feb. 25th
// This program calculates the surface area and volume of a hexagonal prism
#include <iostream>
#include <cmath>
#include <iomanip>

#define RED "033\[31m" // code from https://stackoverflow.com/questions/7414983/how-can-i-use-ansi-escape-codes-for-outputting-colored-text-in-c-and-c
#define BRIGHT "033\[1m" // code from https://stackoverflow.com/questions/7414983/how-can-i-use-ansi-escape-codes-for-outputting-colored-text-in-c-and-c

//calculate the surface area 
double calculateSurfaceArea(double a, double h) {
    // Surface area formula: A = 6ah + 3√3a²
    return 6 * a * h + 3 * sqrt(3) * (a * a);
}

//calculate the volume of a hexagonal prism
double calculateVolume(double a, double h) {
    // Volume formula: V = (3√3 / 2) * a² * h
    return (3 * sqrt(3) / 2) * (a * a) * h;
}

int main(){
    std::cout << "Welcome to the Hexagonal Prism Calculator!" << std::endl;

    // User input for base length (a), height (h), and units
double base, height;
std::cout << "Enter the length (a) of the hexagonal prism: ";
std::cin >> base;
std::cout << "Enter the height (h) of the hexagonal prism: ";
std::cin >> height;
std::string units;
std::cout << "Enter the units (e.g., cm, m, inches): ";
std::cin >> units;

    // Calculate surface area and volume
double surface_area = calculateSurfaceArea(base, height);
double volume = calculateVolume(base, height);

    // Display the results 
std::cout << "\nHexagonal Prism Details:" << std::endl;

    // ANSI codes Bold=1 Red=31
    // Print results in red bold 
    // Rounded 2 decimal places code from https://www.geeksforgeeks.org/rounding-floating-point-number-two-decimal-places-c-c/ 
std::cout << "\033[1;31m";
std::cout << "Base Length (a): " << base << " " << units << std::endl;
std::cout << "Height (h): " << height << " " << units << std::endl;
std::cout << "Surface Area: " << std::fixed << std::setprecision(2) << surface_area << " square " << units << std::endl;
std::cout << "Volume: "  << std::fixed << std::setprecision(2) << volume << " cubic " << units << std::endl;
std::cout << "\033[0m";
    
return 0;
}