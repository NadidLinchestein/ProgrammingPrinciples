/*
    Write a program in C++ that converts from miles to kilometers. Your program should have a
    reasonable prompt for the user to enter a number of miles. A mile is1.609 kilometers.
*/

#include <iostream>

int main()
{
    double miles;
    std::cout << "Enter distance in miles: ";
    std::cin >> miles;

    double kilometers = miles * 1.609;
    std::cout << miles << " miles is " << kilometers << " kilometers." << std::endl;

    return 0;
}
