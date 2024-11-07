/*
    Reject values without units or with “illegal” representations of units, such as y, yard, meter, km, and gallons.
*/

#include <iostream>
#include <string>
#include <limits>

int main() {
    double val;
    std::string unit;
    
    // Initialize smallest and largest with extreme values
    double smallest = std::numeric_limits<double>::max();
    double largest = std::numeric_limits<double>::lowest();

    // Conversion constants for units to centimeters
    const double cm_per_m = 100.0;
    const double cm_per_in = 2.54;
    const double in_per_ft = 12.0;

    while (true) {
        // Prompt the user for a value and unit, or exit if '|' is entered
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

        // Convert the input value to centimeters
        if (unit == "m") {
            val *= cm_per_m;  // Convert meters to centimeters
        } 
        else if (unit == "in") {
            val *= cm_per_in;  // Convert inches to centimeters
        } 
        else if (unit == "ft") {
            val *= cm_per_in * in_per_ft;  // Convert feet to centimeters
        } 
        } else if (unit == "cm") {
            // already in cm, no need to convert
        } else {
            std::cout << "Unknown unit. Allowed units are cm, m, in, and ft.\n";
            continue;
        }

        // Display the entered value in centimeters
        std::cout << "You entered: " << val << " cm";

        // Update and display the smallest value seen so far
        if (val < smallest) {
            smallest = val;
            std::cout << " - the smallest so far";
        }

        // Update and display the largest value seen so far
        if (val > largest) {
            largest = val;
            std::cout << " - the largest so far";
        }

        std::cout << "\n";  // Move to a new line after each entry
    }

    std::cout << "Program exited.\n";
    return 0;
}