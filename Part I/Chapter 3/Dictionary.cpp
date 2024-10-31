// Simple Dictionary in C++

#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

int main()
{
    std::vector<std::string> words;

    // Read whitespace-separated words
    for (std::string temp; std::cin >> temp;)
    {
        words.push_back(temp); // Add to vector
    }

    std::cout << "Number of words: " << words.size() << '\n';

    // Sort the words
    std::sort(words.begin(), words.end());

    // Print unique words
    for (int i = 0; i < words.size(); ++i)
    {
        if (i == 0 || words[i - 1] != words[i]) // Check if it's a new word
        {
            std::cout << words[i] << "\n";
        }
    }

    return 0;
}
