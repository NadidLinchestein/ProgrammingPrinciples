/*
    Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered. 
    When the loop ends, print the smallest, the largest, the number of values, and the sum of values. 
    Note that to keep the sum, you have to decide on a unit to use for that sum; use meters.

    // We’ll convert all values to meters for consistent summing and add variables to track the sum and count of values.
*/

#include <iostream>
#include <string>
#include <limits>

int main() {
    double val;
    std::string unit;

    // Initialize smallest and largest values, sum, and count
    double smallest = std::numeric_limits<double>::max();
    double largest = std::numeric_limits<double>::lowest();
    
    double sum = 0.0;
    int count = 0;

    // Conversion constants for units to meters
    const double cm_per_m = 100.0;
    const double cm_per_in = 2.54;
    const double in_per_ft = 12.0;

    while (true) {
        // Prompt the user for a value with unit or exit command
        std::cout << "Enter a value with unit (e.g., 10cm, 2.5in, 5ft, or 3.33m) or '|' to exit: ";
        
        // Attempt to read a numeric value and unit from user input
        if (!(std::cin >> val >> unit)) {
            // Handle invalid input or exit command
            std::cin.clear();  // Clear input error state
            
            char ch;
            std::cin >> ch;
            
            if (ch == '|') break;  // Exit if '|' is entered
            else {
                std::cout << "Invalid input, please try again.\n";
                continue;
            }
        }

        // Convert the input value to meters
        if (unit == "m") {
            // No conversion needed for meters
        } 
        else if (unit == "cm") {
            val /= cm_per_m;  // Convert centimeters to meters
        } 
        else if (unit == "in") {
            val = (val * cm_per_in) / cm_per_m;  // Convert inches to meters
        } 
        else if (unit == "ft") {
            val = (val * cm_per_in * in_per_ft) / cm_per_m;  // Convert feet to meters
        } 
        else {
            // Handle unknown units
            std::cout << "Unknown unit. Allowed units are cm, m, in, and ft.\n";
            continue;
        }

        // Update the sum and count for each valid input
        sum += val;
        ++count;
        
        // Update smallest and largest values as needed
        if (val < smallest) smallest = val;
        if (val > largest) largest = val;
    }

    // Output the results after exiting the loop
    std::cout << "\nProgram exited.\n";
    std::cout << "Smallest value: " << smallest << " m\n";
    std::cout << "Largest value: " << largest << " m\n";
    std::cout << "Number of values: " << count << "\n";
    std::cout << "Sum of values: " << sum << " m\n";

    return 0;
}
