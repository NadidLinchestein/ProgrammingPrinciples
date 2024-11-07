/*
    Keep all the values entered (converted into meters) in a vector. At the end, write out those values.

    // We’ll store each converted value in a std::vector<double> so we can access them all at the end.
*/

#include <iostream>
#include <string>
#include <vector>
#include <limits>

int main() {
    double val;
    std::string unit;

    // Initialize variables to track smallest, largest, and sum of values, and a vector to store all values
    double smallest = std::numeric_limits<double>::max();
    double largest = std::numeric_limits<double>::lowest();
    double sum = 0.0;
    int count = 0;
    std::vector<double> values;

    // Conversion constants for units to meters
    const double cm_per_m = 100.0;
    const double cm_per_in = 2.54;
    const double in_per_ft = 12.0;

    while (true) {
        // Prompt user for a value with a unit or the exit command
        std::cout << "Enter a value with unit (e.g., 10cm, 2.5in, 5ft, or 3.33m) or '|' to exit: ";
        
        // Attempt to read value and unit from input
        if (!(std::cin >> val >> unit)) {
            // Handle invalid input or exit command
            std::cin.clear();  // Clear error state
            char ch;
            std::cin >> ch;
            
            if (ch == '|') break;  // Exit if '|' is entered
            else {
                std::cout << "Invalid input, please try again.\n";
                continue;
            }
        }

        // Convert input value to meters
        if (unit == "m") {
            // Value is already in meters, no conversion needed
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

        // Store value in vector, update sum, and increment count
        values.push_back(val);
        sum += val;
        ++count;
        
        // Update smallest and largest values
        if (val < smallest) smallest = val;
        if (val > largest) largest = val;
    }

    // Output the results after exiting the loop
    std::cout << "\nProgram exited.\n";
    std::cout << "Smallest value: " << smallest << " m\n";
    std::cout << "Largest value: " << largest << " m\n";
    std::cout << "Number of values entered: " << count << "\n";
    std::cout << "Sum of values: " << sum << " m\n";

    // Display all entered values in meters
    std::cout << "All values entered (in meters): ";
    for (double v : values) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    return 0;
}
