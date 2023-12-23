// Summation the digits of integer entered by user.

#include<iostream>


main()
{
    int sum = 0 ;

    std::string num = "";
    std::cout << "Enter an integer : ";
    std::cin>>num;

    for(char i : num)
    {
        sum+= (i - '0');
    }
    std::cout << sum << std::endl;
}