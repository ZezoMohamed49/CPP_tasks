#include<iostream>
#include <bitset>

main()
{
    // Input a decimal number
    int decimalNumber;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert decimal to binary
    std::bitset<(sizeof(int)*8)> binaryNumber(decimalNumber);

    // Print the result
    std::cout << "Binary representation: " << binaryNumber << std::endl;

}


