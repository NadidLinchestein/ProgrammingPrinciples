/*
    Change the program so that it uses doubles instead of ints.
*/

#include <iostream>

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
        else if (val1 < val2)
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

    std::cout << "Program exited.\n";
    return 0;
}
