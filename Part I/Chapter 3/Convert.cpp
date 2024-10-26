#include <iostream>
using namespace std;

int main()
{
    constexpr double cm_per_inch = 2.54; // number of centimeters in an inch
    double length = 1;                   // length in inches or centimeters
    char unit = ' ';
    cout << "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;
    if (unit == 'i')
        cout << length << "in == " << length * cm_per_inch << "cm\n";
    else
        cout << length << "cm == " << length / cm_per_inch << "in\n";
}