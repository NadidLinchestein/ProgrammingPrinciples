/*
    Write a program that
    prompts the user to enter two integer values. Store these values in int variables named val1 and val2.

    Write your program to determine
    the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
*/

#include <iostream>

int main()
{
    int val1, val2;
    std::cout << "Enter two integer values: ";
    std::cin >> val1 >> val2;

    int smaller = (val1 < val2) ? val1 : val2;
    int larger = (val1 > val2) ? val1 : val2;

    std::cout << "Smaller: " << smaller << std::endl;
    std::cout << "Larger: " << larger << std::endl;
    std::cout << "Sum: " << val1 + val2 << std::endl;
    std::cout << "Difference: " << val1 - val2 << std::endl;
    std::cout << "Product: " << val1 * val2 << std::endl;

    if (val2 != 0)
        std::cout << "Ratio: " << static_cast<double>(val1) / val2 << std::endl;
    else
        std::cout << "Ratio: Undefined (cannot divide by zero)" << std::endl;

    return 0;
}
