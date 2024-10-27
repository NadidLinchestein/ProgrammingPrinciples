// The mean and median temperatures

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<double> temps;           // temperatures
    for (double temp; std::cin >> temp;) // read into temp
        temps.push_back(temp);           // put temp into vector

    // compute mean temperature
    double sum = 0;
    for (double x : temps)
        sum += x;
    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    // compute median temperature
    std::sort(temps.begin(), temps.end()); // sort the temperatures
    if (temps.size() % 2 == 0)
    {
        // If even, average the two middle elements
        std::cout << "Median temperature: "
                  << (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2 << '\n';
    }
    else
    {
        // If odd, take the middle element
        std::cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }

    return 0;
}