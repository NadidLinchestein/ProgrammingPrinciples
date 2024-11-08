/*
    If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as come after it,” 
    fix the program in §3.6.3 so that it always prints out a median. 
    
    Hint: A median need not be an element of the sequence.
*/

#include <iostream>
#include <vector>
#include <algorithm> // for sort

int main() {
    std::vector<double> temps; // temperatures

    // Read temperatures from input
    for (double temp; std::cin >> temp;) {
        temps.push_back(temp);
    }

    // Compute mean temperature
    double sum = 0;
    for (double x : temps) {
        sum += x;
    }
    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    // Compute median temperature
    std::sort(temps.begin(), temps.end()); // sort the temperatures

    double median;
    size_t size = temps.size();
    if (size % 2 == 0) {
        // Even number of elements: average the two middle elements
        median = (temps[size / 2 - 1] + temps[size / 2]) / 2;
    } else {
        // Odd number of elements: middle element is the median
        median = temps[size / 2];
    }

    std::cout << "Median temperature: " << median << '\n';

    return 0;
}
