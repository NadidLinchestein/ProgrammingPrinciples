/*
    Write a program that performs as a very simple calculator. 
    
    Your calculator should be able to handle the four basic math operations – add, subtract, multiply, and divide – on two input values. 
    Your program character to represent an operation. If the entry arguments are 35.6, 24.1, and '+', the program output should be The sum of 35.6 and 24.1 is 59.7. 
*/

#include <iostream>
#include <iomanip> // For setting precision
#include <limits>  // For numeric limits

// Function prototypes
void displayInstructions();
bool isValidOperation(char operation);
double performOperation(double num1, double num2, char operation);

int main() {
    // Display instructions to the user
    displayInstructions();

    // Declare variables for inputs
    double firstNumber, secondNumber;
    char operation;

    // Prompt the user for inputs
    std::cout << "Enter the first number: ";
    while (!(std::cin >> firstNumber)) { // Input validation for a number
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please enter a valid number: ";
    }

    std::cout << "Enter the second number: ";
    while (!(std::cin >> secondNumber)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid number: ";
    }

    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    // Validate the operation
    if (!isValidOperation(operation)) {
        std::cerr << "Error: Invalid operation entered. Please use +, -, *, or /.\n";
        return 1; // Exit with an error code
    }

    // Handle division by zero edge case
    if (operation == '/' && secondNumber == 0) {
        std::cerr << "Error: Division by zero is undefined.\n";
        return 1; // Exit with an error code
    }

    // Perform the operation and display the result
    double result = performOperation(firstNumber, secondNumber, operation);
    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places
    std::cout << "The result of " << firstNumber << " " << operation << " " << secondNumber
              << " is " << result << ".\n";

    return 0; // Exit successfully
}

// Function to display instructions to the user
void displayInstructions() {
    std::cout << "Welcome to the Simple Calculator!\n";
    std::cout << "You can perform the following operations: addition (+), subtraction (-), multiplication (*), and division (/).\n";
    std::cout << "Please follow the prompts to enter two numbers and an operation.\n\n";
}

// Function to validate if the entered operation is valid
bool isValidOperation(char operation) {
    return operation == '+' || operation == '-' || operation == '*' || operation == '/';
}

// Function to perform the specified mathematical operation
double performOperation(double num1, double num2, char operation) {
    switch (operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            return 0.0; // Should never reach here if inputs are validated
    }
}
