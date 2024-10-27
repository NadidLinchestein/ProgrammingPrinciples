/*
    Write a program that prompts the user to enter three integer values, and
    then outputs the values in numerical sequence separated by commas.

    So, if the user enters the values 10 4 6, the output should be 4, 6, 10.

    If two values are the same, they should just be ordered together.
    So, the input 4 5 4 should give 4, 4, 5.
*/

#include <iostream>

int main()
{
    int val1, val2, val3;
    std::cout << "Enter three integer values: ";
    std::cin >> val1 >> val2 >> val3;

    // Sorting the values
    if (val1 > val2)
        std::swap(val1, val2);
    if (val1 > val3)
        std::swap(val1, val3);
    if (val2 > val3)
        std::swap(val2, val3);

    std::cout << "Sorted order: " << val1 << ", " << val2 << ", " << val3 << std::endl;

    return 0;
}
