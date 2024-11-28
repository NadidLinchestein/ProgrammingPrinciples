/*
    Write a program to play a numbers guessing game. 
    The user thinks of a number between 1 and 100 and your program asks questions to figure out 
    what the number is (e.g., “Is the number you are thinking of less than 50?”). 
    Your program should be able to identify the number after asking no more than seven questions.
*/

#include <iostream>
#include <limits>

int main() {
    std::cout << "Think of a number between 1 and 100 (inclusive).\n";
    std::cout << "I will try to guess it in at most 7 questions.\n";
    std::cout << "Please answer with 'y' for Yes and 'n' for No.\n\n";

    // Define the range of possible numbers
    int low = 1;
    int high = 100;
    int attempts = 0; // To count the number of questions asked

    // Start guessing
    while (low <= high) {
        ++attempts;

        // Find the midpoint of the current range
        int mid = low + (high - low) / 2;

        // Ask the user if the number is less than the midpoint
        std::cout << "Is the number you are thinking of less than " << mid << "? (y/n): ";
        char response;
        std::cin >> response;

        // Handle invalid input
        if (response != 'y' && response != 'n') {
            std::cout << "Invalid response. Please enter 'y' or 'n'.\n";
            --attempts; // Don't count invalid input as an attempt
            continue;
        }

        if (response == 'y') {
            // The number is less than mid, adjust the high bound
            high = mid - 1;
        } else {
            // The number is greater than or equal to mid, adjust the low bound
            low = mid;
        }

        // If low and high converge, the number is found
        if (low == high) {
            std::cout << "\nI guessed it! The number you are thinking of is " << low << ".\n";
            std::cout << "It took me " << attempts << " questions.\n";
            return 0;
        }
    }

    // If we exit the loop without guessing, something went wrong
    std::cout << "\nSomething went wrong. Are you sure you followed the rules?\n";
    return 1;
}
