#include <iostream>
#include <math.h>
#include <string>
#include <ctime>

float sumTriple(float num1, float num2, float num3) {
    return num1 + num2 + num3;
}

float mulTriple(float num1, float num2, float num3) {
    return num1 * num2 * num3;
}

float aveTriple(float num1, float num2, float num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    float num1, num2, num3;

    while (true) {
        std::cout << "Enter three float numbers (separated by space): ";
        std::cin >> num1 >> num2 >> num3;

        if (num1 == -1.0 && num2 == -1.0 && num3 == -1.0) {
            std::cout << "Exiting program.\n";
            break;
        }

        float sum = sumTriple(num1, num2, num3);
        float multiplication = mulTriple(num1, num2, num3);
        float average = aveTriple(num1, num2, num3);

        std::cout << "Sum: " << sum << "\n";
        std::cout << "Multiplication: " << multiplication << "\n";
        std::cout << "Average: " << average << "\n";
    }

    return 0;
}