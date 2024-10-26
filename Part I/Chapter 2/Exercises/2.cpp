/*
    Write a program in C++ that converts from miles to kilometers. Your program should have a
    reasonable prompt for the user to enter a number of miles. A mile is1.609 kilometers.
*/

#include <iostream>

int main()
{
    int miles;

    std::cout << "Enter Miles: ";
    std::cin >> miles;

    int conversion = 1.609 * miles;
    std::cout << "Kilometers: " << conversion << std::endl;

    return 0;
}