#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned>(std::time(0)));

    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;
    int randomNumber = std::rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
    int userGuess = 0;
    int attempts = 0;
    bool guessedCorrectly = false;

    std::cout << "Welcome to the Casino Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between " << MIN_NUMBER << " and " << MAX_NUMBER << ". Try to guess it!" << std::endl;

    while (!guessedCorrectly) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Validate input
        if (!std::cin) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number." << std::endl;
            continue;
        }

        attempts++;

        if (userGuess < MIN_NUMBER || userGuess > MAX_NUMBER) {
            std::cout << "Your guess is out of range. Please guess a number between " << MIN_NUMBER << " and " << MAX_NUMBER << "." << std::endl;
        } else if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            guessedCorrectly = true;
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}
