/*
    Read a sequence of double values into a vector. 
    Think of each value as the distance between two cities along a given route.  
    Compute and print the total distance (the sum of all distances). 
    Find and print the smallest and greatest distance between two neighboring cities. 
    Find and print the mean distance between two neighboring cities.
*/

#include <iostream>
#include <vector>
#include <algorithm> // For min_element and max_element
#include <numeric>   // For accumulate
#include <limits>    // For numeric limits

int main() {
    std::vector<double> distances; // To store distances between cities
    double distance;

    // Prompt the user for input
    std::cout << "Enter distances between cities (type any non-numeric value to stop):\n";

    // Read distances from the user
    while (true) {
        std::cout << "Distance: ";
        std::cin >> distance;

        // Check if input is valid
        if (std::cin.fail()) { 
            // If input is invalid, clear the error flag and stop input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }

        if (distance < 0) { 
            // Handle edge case: negative distances are not valid
            std::cout << "Distance cannot be negative. Please enter a valid distance.\n";
            continue;
        }

        // Add the valid distance to the vector
        distances.push_back(distance);
    }

    // Check if any distances were entered
    if (distances.empty()) {
        std::cout << "No distances were entered. Exiting program.\n";
        return 0;
    }

    // Calculate the total distance
    double total_distance = std::accumulate(distances.begin(), distances.end(), 0.0);

    // Find the smallest and greatest distances
    double smallest_distance = *std::min_element(distances.begin(), distances.end());
    double greatest_distance = *std::max_element(distances.begin(), distances.end());

    // Calculate the mean distance
    double mean_distance = total_distance / distances.size();

    // Display the results
    std::cout << "\nResults:\n";
    std::cout << "----------------------------------\n";
    std::cout << "Total distance: " << total_distance << '\n';
    std::cout << "Smallest distance: " << smallest_distance << '\n';
    std::cout << "Greatest distance: " << greatest_distance << '\n';
    std::cout << "Mean distance: " << mean_distance << '\n';

    return 0;
}