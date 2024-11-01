/*
    Write a program that consists of a while-loop that (each time around the loop) reads
    in two ints and then prints them. Exit the program when a terminating '|' is entered.
*/

#include <iostream>

int main()
{
    int val1, val2;

    while (true)
    {
        std::cout << "Enter two integers (or '|' to exit): ";

        // If the input is not an integer, std::cin will enter a failure state. The program checks this by using if (!())
        if (!(std::cin >> val1 >> val2))
        {
            if (std::cin.fail())
            {
                std::cin.clear(); // Clear the error flag

                // Read the next character into ch to see if it’s '|'
                char ch;
                std::cin >> ch;

                // If ch is '|', the program breaks out of the loop and ends.
                // Otherwise, it notifies the user with Invalid input, please try again. and re-prompts for input by continuing the loop.
                if (ch == '|')
                {
                    break;
                }
                else
                {
                    std::cout << "Invalid input, please try again.\n";
                    continue;
                }
            }
        }
        std::cout << "You entered: " << val1 << " and " << val2 << "\n";
    }
    // When the loop is exited by entering '|', the program prints Program exited.
    std::cout << "Program exited.\n";

    return 0;
}