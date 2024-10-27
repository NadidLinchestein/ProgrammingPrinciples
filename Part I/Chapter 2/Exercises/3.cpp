/*
    Write a program that doesn’t do anything, but declares a number of variables with legal
    and illegal names (such as int double = 0;), so that you can see how the compiler reacts.
*/

#include <iostream>

int main()
{
    int valid_var = 0;
    int _anotherValidVar = 1;
    // int 2invalidVar = 2;      // Illegal: cannot start with a number
    // int double = 3;            // Illegal: cannot use reserved keywords
    // int another-valid = 4;     // Illegal: hyphens are not allowed

    std::cout << "Testing variable declarations." << std::endl;

    return 0;
}
