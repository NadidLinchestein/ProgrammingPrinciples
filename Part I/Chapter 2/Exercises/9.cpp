/*
    Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2.
    When the user inputs a number, the program should print out the corresponding digit.
    Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the user enters
    something that doesn’t correspond, such as stupid computer!.
*/

#include <iostream>
#include <string>

int main()
{
    std::string number;
    std::cout << "Enter a number (zero to four): ";
    std::cin >> number;

    if (number == "zero")
        std::cout << "0" << std::endl;
    else if (number == "one")
        std::cout << "1" << std::endl;
    else if (number == "two")
        std::cout << "2" << std::endl;
    else if (number == "three")
        std::cout << "3" << std::endl;
    else if (number == "four")
        std::cout << "4" << std::endl;
    else
        std::cout << "Not a number I know." << std::endl;

    return 0;
}
