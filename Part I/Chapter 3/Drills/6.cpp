/*
    Now change the body of the loop so that it reads just one double each time around.
    Define two variables to keep track of which is the smallest and which is the largest value you have seen so far.

    Each time through the loop write out the value entered.
    If it’s the smallest so far, write the smallest so far after the number.
    If it is the largest so far, write the largest so far after the number.
*/

#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    double val, smallest = std::numeric_limits<double>::max();
    double largest = std::numeric_limits<double>::lowest();

    while (true)
    {
        std::cout << "Enter a number (or '|' to exit): ";

        if (!(std::cin >> val))
        {
            std::cin.clear();

            char ch;
            std::cin >> ch;

            if (ch == '|')
                break;
            else
            {
                std::cout << "Invalid input, please try again.\n";
                continue;
            }
        }

        std::cout << "You entered: " << val;

        if (val < smallest)
        {
            smallest = val;
            std::cout << " - the smallest so far";
        }
        if (val > largest)
        {
            largest = val;
            std::cout << " - the largest so far";
        }

        std::cout << "\n";
    }

    std::cout << "Program exited.\n";
    return 0;
}
