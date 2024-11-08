/*
    Write a program that reads a string from input and then, for each character read, prints out the character and its integer value on a line.
*/

#include <iostream>
#include <string>

int main() {
    std::string input;
    
    // Prompt user for input string
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    // Iterate over each character in the input string
    for (char ch : input) {
        // Print character and its ASCII integer value
        std::cout << "Character: " << ch << " | ASCII Value: " << static_cast<int>(ch) << '\n';
    }
    
    return 0;
}
