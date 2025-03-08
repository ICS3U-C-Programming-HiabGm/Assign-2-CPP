// Created by: Hiab G
// Date: Wed, Feb. 25th
// This program calculates the surface area and volume of a hexagonal prism  with user input



#include <iostream>
#include <cmath>
#include <string>
#include <map>

// Function to calculate the surface area 
double calculateSurfaceArea(double a, double h) {
// Surface area formula: A = 6ah + 3√3a²
return 6 * a * h + 3 * sqrt(3) * (a * a);
}

// Function to calculate the volume of a hexagonal prism
double calculateVolume(double a, double h) {
// Volume formula: V = (3√3 / 2) * a² * h
return (3 * sqrt(3) / 2) * (a * a) * h;
}

int main() {
std::cout << "Welcome to the Hexagonal Prism Calculator!" << std::endl;

// User input for base length (a), height (h), and units
double base, height;
std::string units;
std::cout << "Enter the length (a) of the hexagonal prism: ";
std::cin >> base;
std::cout << "Enter the height (h) of the hexagonal prism: ";
std::cin >> height;
std::cout << "Enter the units of measurement (e.g., meters, inches): ";
std::cin >> units;

// Ask the user for text color
std::cout << "\nChoose a text color:" << std::endl;
std::cout << "1. Red" << std::endl;
std::cout << "2. Green" << std::endl;
std::cout << "3. Blue" << std::endl;
std::cout << "4. Yellow" << std::endl;
std::string color_choice;
std::cout << "Enter the number of your choice (1-4): ";
std::cin >> color_choice;

// Map color choice to ANSI color codes 
std::map<std::string, std::string> color_map = {
    {"1", "\033[31m"}, // Red
    {"2", "\033[32m"}, // Green
    {"3", "\033[34m"}, // Blue
    {"4", "\033[33m"}  // Yellow
    };
std::string color = color_map.count(color_choice) ? color_map[color_choice] : "\033[0m"; // Default to reset

// Ask the user for text style
std::cout << "\nChoose a text style:" << std::endl;
std::cout << "1. Normal" << std::endl;
std::cout << "2. Bright" << std::endl;
std::cout << "3. Dim" << std::endl;
std::string style_choice;
std::cout << "Enter the number of your choice (1-3): ";
std::cin >> style_choice;

// Map style choice to ANSI style codes
std::map<std::string, std::string> style_map = {
    {"1", "\033[0m"},  // Normal
    {"2", "\033[1m"},  // Bright
    {"3", "\033[2m"}   // Dim
    };
std::string style = style_map.count(style_choice) ? style_map[style_choice] : "\033[0m"; // Default to normal

// Calculate surface area and volume
double surface_area = calculateSurfaceArea(base, height);
double volume = calculateVolume(base, height);

// Display the results with the chosen color and style
std::cout << "\nHexagonal Prism Details:" << std::endl;
std::cout << "Base Length (a): " << base << " " << units << std::endl;
std::cout << "Height (h): " << height << " " << units << std::endl;
std::cout << "Surface Area: " << color << style << surface_area << " square " << units << "\033[0m" << std::endl;
std::cout << "Volume: " << color << style << volume << " cubic " << units << "\033[0m" << std::endl;

return 0;
}