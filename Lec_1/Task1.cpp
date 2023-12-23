// Create a table for AscII code.

#include<iostream>

int main()
{
    uint8_t i ;

    std::cout << "+--------------+--------------+\n|     Char     |     ASCII    |\n+--------------+--------------+" << std::endl;
    for(i=0;i<255;i++)
    {
        std::cout<<"|\t"<<i<<"\t|"<<"\t"<<static_cast<int>(i)<<"\t|"<<std::endl;
    }

}
