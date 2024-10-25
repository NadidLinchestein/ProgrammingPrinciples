/*
    Add an introductory line or two, like “How are you? I am fine. I miss you.”
    Be sure to indent the first line. Add a few more lines of your choosing.

    – it’s your letter
 */

#include <iostream>
#include <string>

int main()
{
    std::string firstName;

    // Ask for the name of the person the user wants to write to
    std::cout << "Enter the name of the person you want to write to: ";
    std::cin >> firstName;

    // Output the letter content
    std::cout << "\nDear " << firstName << "," << std::endl;
    std::cout << "How are you? I am fine. I miss you." << std::endl;
    std::cout << "It has been a while since we last spoke, and I hope everything is going well." << std::endl;
    std::cout << "I have been keeping busy with my work and trying out new hobbies." << std::endl;
    std::cout << "I look forward to catching up with you soon and hearing all about your recent adventures." << std::endl;
    std::cout << "\nBest regards," << std::endl;
    std::cout << "Your friend" << std::endl;

    return 0;
}
