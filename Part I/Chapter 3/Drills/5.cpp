/*
    Change the program so that it writes out "the numbers are almost equal" after writing out which is the larger
    and the smaller if the two numbers differ by less than 1.0/100.
*/

#include <iostream>
#include <cmath> // for std::abs

int main()
{
    double val1, val2;

    while (true)
    {
        std::cout << "Enter two numbers (or '|' to exit): ";

        if (!(std::cin >> val1 >> val2))
        {
            if (std::cin.fail())
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
        }

        if (val1 == val2)
        {
            std::cout << "The numbers are equal.\n";
        }
        else
        {
            if (std::abs(val1 - val2) < 1.0 / 100)
            {
                std::cout << "The numbers are almost equal.\n";
            }
            if (val1 < val2)
            {
                std::cout << "The smaller value is: " << val1 << "\n";
                std::cout << "The larger value is: " << val2 << "\n";
            }
            else
            {
                std::cout << "The smaller value is: " << val2 << "\n";
                std::cout << "The larger value is: " << val1 << "\n";
            }
        }
    }

    std::cout << "Program exited.\n";
    return 0;
}
