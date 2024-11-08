/* 
    How do you sort the elements of a vector
*/

#include <iostream>
#include <vector>
#include <algorithm> // Needed for std::sort

int main() {
    // Initialize a sample vector with unsorted integers
    std::vector<int> myVector = {5, 2, 8, 1, 3};

    // Use std::sort to sort the vector in ascending order
    std::sort(myVector.begin(), myVector.end());

    // Print the sorted vector elements
    std::cout << "Sorted elements: ";
    
    for (int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }

    // Print a newline for better formatting
    std::cout << std::endl;

    return 0;
}
