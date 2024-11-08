/*
    How do you write a for-loop that prints every element of a vector?
*/


#include <iostream>
#include <vector>

int main() {
    // Sample vector to demonstrate iteration
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Loop through each element in the vector
    for (int i = 0; i < myVector.size(); i++) {
        // Output each element followed by a space
        std::cout << myVector[i] << " ";
    }

    // Print a newline for better output formatting
    std::cout << std::endl;

    return 0;
}