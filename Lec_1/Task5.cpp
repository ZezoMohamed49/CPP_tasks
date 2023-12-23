#include<iostream>

main()
{
    int num ;

    std::cout << "Enter number : ";
    std::cin>>num;

    for(int i =1; i<11 ;i++)
    {
        std::cout << num <<" * "<<i<<"  = "<<num * i<< std::endl;
    }
}