#include <iostream>
#include <math.h>
#include <string>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int secretNumber = std::rand() % 21;
    int userGuess;

    std::cout << "Welcome to the Guess the Number game!\n";
    std::cout << "Try to guess the secret number between 0 and 20.\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess < secretNumber) {
            std::cout << "Too small! Try again.\n";
        } else if (userGuess > secretNumber) {
            std::cout << "Too large! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the secret number: " << secretNumber << "\n";
        }
    } while (userGuess != secretNumber);

    return 0;
}