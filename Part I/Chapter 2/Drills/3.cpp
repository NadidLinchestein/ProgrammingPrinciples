/*
    Now prompt the user for the name of another friend and store it in friend_name.

    Add a line to your letter: “Have you seen friend_name lately?”
*/

#include <iostream>
#include <string>

int main()
{
    std::string firstName, friendName;

    // Ask for the name of the person the user wants to write to
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> firstName;

    // Ask for the name of another friend
    std::cout << "Enter the name of another friend: ";
    std::cin >> friendName;

    // Output the letter content
    std::cout << "\nDear " << firstName << "," << std::endl;
    std::cout << "How are you? I am fine. I miss you." << std::endl;
    std::cout << "It has been a while since we last spoke, and I hope everything is going well." << std::endl;
    std::cout << "Have you seen " << friendName << " lately?" << std::endl;
    std::cout << "\nBest regards," << std::endl;
    std::cout << "Your friend" << std::endl;

    return 0;
}
