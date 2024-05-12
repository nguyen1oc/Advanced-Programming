#include <iostream>
#include <math.h>
#include <string>
#include <ctime>

const float pi = 3.14;

float calculateSquareArea(float side) {
    return side * side;
}

float calculateRectangleArea(float length, float width) {
    return length * width;
}

float calculateCircleArea(float radius) {
    return pi * radius * radius;
}

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    float area;
    while (true) {
        std::cout << "Choose a shape to calculate area:\n";
        std::cout << "1. Square\n";
        std::cout << "2. Rectangle\n";
        std::cout << "3. Circle\n";
        std::cout << "4. Triangle\n";
        std::cout << "Enter choice (1-4), or -1 to exit: ";
        std::cin >> choice;

        if (choice == -1) {
            std::cout << "Exiting program.\n";
            break;
        }
        switch (choice) {
            case 1:
                float side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                area = calculateSquareArea(side);
                break;
            case 2: 
                float length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                area = calculateRectangleArea(length, width);
                break;
            case 3:
                float radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                area = calculateCircleArea(radius);
                break;
            case 4:
                float base, height;
                std::cout << "Enter the base length of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                area = calculateTriangleArea(base, height);
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
                continue;  
        }
        std::cout << "Area: " << area << "\n";
    }

    return 0;
}