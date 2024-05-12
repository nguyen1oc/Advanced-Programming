#include <iostream>
#include <math.h>
#include <string>
#include <ctime>

const int size = 4;

void displayMatrix(int matrix[size][size]) {
    std::cout << "Matrix:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

int main() {
    int matrix[size][size];
    std::cout << "Enter elements of a 4x4 matrix:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    displayMatrix(matrix);

    int totalSum = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            totalSum += matrix[i][j];
        }
    }
    std::cout << "Sum of all elements: " << totalSum << "\n";

    std::cout << "Sum of elements in each row:\n";
    for (int i = 0; i < size; ++i) {
        int rowSum = 0;
        for (int j = 0; j < size; ++j) {
            rowSum += matrix[i][j];
        }
        std::cout << "Row " << i + 1 << ": " << rowSum << "\n";
    }

    std::cout << "Sum of elements in each column:\n";
    for (int j = 0; j < size; ++j) {
        int colSum = 0;
        for (int i = 0; i < size; ++i) {
            colSum += matrix[i][j];
        }
        std::cout << "Column " << j + 1 << ": " << colSum << "\n";
    }

    int mainDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];
    }
    std::cout << "Sum of elements in the main diagonal: " << mainDiagonalSum << "\n";

    return 0;
}
