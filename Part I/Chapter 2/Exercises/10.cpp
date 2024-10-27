/*
    Write a program that takes an operation followed by two operands and outputs the result. For example:
    + 100 3.14
    * 45

    Read the operation into a string called operation and use an if-statement to figure out
    which operation the user wants, for example, if (operation=="+"). Read the operands into variables of type double.
    Implement this for operations called +, −, *, /, plus, minus, mul, and div with their obvious meanings.
*/

#include <iostream>
#include <string>

int main()
{
    std::string operation;
    double operand1, operand2;

    std::cout << "Enter an operation (+, -, *, /, plus, minus, mul, div) followed by two numbers: ";
    std::cin >> operation >> operand1 >> operand2;

    if (operation == "+" || operation == "plus")
        std::cout << "Result: " << operand1 + operand2 << std::endl;
    else if (operation == "-" || operation == "minus")
        std::cout << "Result: " << operand1 - operand2 << std::endl;
    else if (operation == "*" || operation == "mul")
        std::cout << "Result: " << operand1 * operand2 << std::endl;
    else if ((operation == "/" || operation == "div") && operand2 != 0)
        std::cout << "Result: " << operand1 / operand2 << std::endl;
    else
        std::cout << "Invalid operation or division by zero." << std::endl;

    return 0;
}
