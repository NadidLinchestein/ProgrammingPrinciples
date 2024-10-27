/*
    Do exercise 6, but with three string values. So, if the user enters the values
    Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.
*/

#include <iostream>
#include <string>

int main()
{
    std::string str1, str2, str3;
    std::cout << "Enter three string values: ";
    std::cin >> str1 >> str2 >> str3;

    // Sorting the strings
    if (str1 > str2)
        std::swap(str1, str2);
    if (str1 > str3)
        std::swap(str1, str3);
    if (str2 > str3)
        std::swap(str2, str3);

    std::cout << "Sorted order: " << str1 << ", " << str2 << ", " << str3 << std::endl;

    return 0;
}
