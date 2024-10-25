/*
    Prompt the user to enter the age of the recipient and assign it to an int variable age.
    Have your program write “I hear you just had a birthday and you are age years old.”

    If age is 0 or less or 110 or more, call simple_error("you’re kidding!")
    using simple_error() from PPP_support.
*/

#include <iostream>
#include <string>
#include <stdexcept> // For handling exceptions

// Function to simulate simple_error from PPP_support
void simple_error(const std::string &error_message)
{
    throw std::runtime_error(error_message);
}

int main()
{
    std::string firstName, friendName;
    int age;

    // Ask for the name of the person the user wants to write to
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> firstName;

    // Ask for the name of another friend
    std::cout << "Enter the name of another friend: ";
    std::cin >> friendName;

    // Prompt the user to enter the age of the recipient
    std::cout << "Enter the age of the recipient: ";
    std::cin >> age;

    // Check if the age is within a reasonable range
    if (age <= 0 || age >= 110)
    {
        simple_error("you are kidding!");
    }

    // Output the letter content
    std::cout << "\nDear " << firstName << "," << std::endl;
    std::cout << "    How are you? I am fine. I miss you." << std::endl;
    std::cout << "It has been a while since we last spoke, and I hope everything is going well." << std::endl;
    std::cout << "Have you seen " << friendName << " lately?" << std::endl;
    std::cout << "I hear you just had a birthday and you are " << age << " years old." << std::endl;
    std::cout << "\nBest regards," << std::endl;
    std::cout << "Your friend" << std::endl;

    return 0;
}
