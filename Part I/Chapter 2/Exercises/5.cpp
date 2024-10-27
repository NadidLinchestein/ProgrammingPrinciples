/*
    Modify the program above to ask the user to enter floating-point values and store them in double variables.
    Compare the outputs of the two programs for some inputs of your choice.

    Are the results the same? Should they be? What’s the difference?
*/

#include <iostream>

int main()
{
    double val1, val2;
    std::cout << "Enter two floating-point values: ";
    std::cin >> val1 >> val2;

    double smaller = (val1 < val2) ? val1 : val2;
    double larger = (val1 > val2) ? val1 : val2;

    std::cout << "Smaller: " << smaller << std::endl;
    std::cout << "Larger: " << larger << std::endl;
    std::cout << "Sum: " << val1 + val2 << std::endl;
    std::cout << "Difference: " << val1 - val2 << std::endl;
    std::cout << "Product: " << val1 * val2 << std::endl;

    if (val2 != 0)
        std::cout << "Ratio: " << val1 / val2 << std::endl;
    else
        std::cout << "Ratio: Undefined (cannot divide by zero)" << std::endl;

    return 0;
}
