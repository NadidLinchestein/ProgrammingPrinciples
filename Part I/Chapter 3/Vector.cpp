// Vectors in C++

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {5, 7, 9, 4, 6, 8};

    for (int x : v) // for each x in v
        std::cout << x << '\n';

    return 0;
}