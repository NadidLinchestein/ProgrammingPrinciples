/*
    Before writing out the values from the vector, sort them (that’ll make them come out in increasing order).

    // We’ll sort the vector and display the values in ascending order.
*/

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
    double val;
    std::string unit;
    
    double smallest = std::numeric_limits<double>::max();
    double largest = std::numeric_limits<double>::lowest();
    double sum = 0.0;
    int count = 0;
    
    std::vector<double> values;

    // Conversion constants
    const double cm_per_m = 100.0;
    const double cm_per_in = 2.54;
    const double in_per_ft = 12.0;

    // Main input loop
    while (true) {
        std::cout << "Enter a value with unit (e.g., 10cm, 2.5in, 5ft, or 3.33m) or '|' to exit: ";
        
        // Try reading value and unit
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

        // Convert input value to meters for consistency
        if (unit == "m") {
            // Already in meters
        } 
        else if (unit == "cm") {
            val /= cm_per_m;  // Convert cm to meters
        } 
        else if (unit == "in") {
            val = (val * cm_per_in) / cm_per_m;  // Convert inches to meters
        } 
        else if (unit == "ft") {
            val = (val * cm_per_in * in_per_ft) / cm_per_m;  // Convert feet to meters
        } 
        else {
            std::cout << "Unknown unit. Allowed units are cm, m, in, and ft.\n";
            continue;
        }

        // Update the values list and statistics
        values.push_back(val);
        sum += val;
        ++count;
        
        if (val < smallest) smallest = val;
        if (val > largest) largest = val;
    }

    // Display results
    std::cout << "\nProgram exited.\n";
    std::cout << "Smallest value: " << smallest << " m\n";
    std::cout << "Largest value: " << largest << " m\n";
    std::cout << "Number of values entered: " << count << "\n";
    std::cout << "Sum of values: " << sum << " m\n";

    // Sort and display all values
    std::sort(values.begin(), values.end());
    
    std::cout << "All values entered (in meters, sorted): ";
    
    for (double v : values) {
        std::cout << v << " ";
    }
    
    std::cout << "\n";

    return 0;
}
