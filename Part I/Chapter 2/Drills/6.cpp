/*
    Add “Yours sincerely,” followed by two blank lines for a signature, followed by your name.
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
    std::cout << "How are you? I am fine. I miss you." << std::endl;
    std::cout << "It has been a while since we last spoke, and I hope everything is going well." << std::endl;
    std::cout << "Have you seen " << friendName << " lately?" << std::endl;
    std::cout << "I hear you just had a birthday and you are " << age << " years old." << std::endl;

    // Additional lines based on age
    if (age < 12)
    {
        std::cout << "Next year you will be " << age + 1 << "." << std::endl;
    }
    else if (age == 17)
    {
        std::cout << "Next year you will be able to vote." << std::endl;
    }
    else if (age > 70)
    {
        std::cout << "Are you retired?" << std::endl;
    }

    // Sign-off
    std::cout << "\nYours sincerely," << std::endl;
    std::cout << "\n\n"
              << "Nadid Linchestein" << std::endl;

    return 0;
}
