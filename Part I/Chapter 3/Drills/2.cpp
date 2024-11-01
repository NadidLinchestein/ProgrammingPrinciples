/*
    Change the program to write out
    "the smaller value is": followed by the smaller of the numbers
    "the larger value is": followed by the larger value.
*/

#include <iostream>

int main()
{
    int val1, val2;

    while (true)
    {
        std::cout << "Enter two integers (or '|' to exit): ";

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

    std::cout << "Program exited.\n";
    return 0;
}
