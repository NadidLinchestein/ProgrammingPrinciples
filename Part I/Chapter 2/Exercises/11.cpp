/*
    Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins),
    dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar coins (100-cent coins).
    Query the user separately for the number of each size coin, e.g., “How many pennies do you have?”

    Then your program should print out something like this:

    You have 23 pennies.
    You have 17 nickels.
    You have 14 dimes.
    You have 7 quarters.
    You have 3 half dollars.
    The value of all of your coins is 573 cents.

    Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
    Also, report the sum in dollars and cents, i.e., .73 instead of 573 cents.
*/

#include <iostream>
#include <string>

int main()
{
    int pennies, nickels, dimes, quarters, half_dollars, dollars;

    std::cout << "How many pennies do you have? ";
    std::cin >> pennies;
    std::cout << "How many nickels do you have? ";
    std::cin >> nickels;
    std::cout << "How many dimes do you have? ";
    std::cin >> dimes;
    std::cout << "How many quarters do you have? ";
    std::cin >> quarters;
    std::cout << "How many half dollars do you have? ";
    std::cin >> half_dollars;
    std::cout << "How many one-dollar coins do you have? ";
    std::cin >> dollars;

    // Calculating total value in cents
    int total_cents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) +
                      (half_dollars * 50) + (dollars * 100);

    // Outputting coin counts
    std::cout << "You have " << pennies << (pennies == 1 ? " penny." : " pennies.") << std::endl;
    std::cout << "You have " << nickels << (nickels == 1 ? " nickel." : " nickels.") << std::endl;
    std::cout << "You have " << dimes << (dimes == 1 ? " dime." : " dimes.") << std::endl;
    std::cout << "You have " << quarters << (quarters == 1 ? " quarter." : " quarters.") << std::endl;
    std::cout << "You have " << half_dollars << (half_dollars == 1 ? " half dollar." : " half dollars.") << std::endl;
    std::cout << "You have " << dollars << (dollars == 1 ? " dollar." : " dollars.") << std::endl;

    // Displaying total value
    std::cout << "The value of all of your coins is " << total_cents << " cents, or $"
              << total_cents / 100 << "." << total_cents % 100 << "." << std::endl;

    return 0;
}
