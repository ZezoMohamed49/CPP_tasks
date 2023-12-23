// maximum number between three values.
#include "iostream"

int main(int argc, const char** argv) 
{
    int x ,y,z,max;

    std::cout << "Enter 1st num : ";
    std::cin>>x;
    std::cout << "Enter 2nd num : ";
    std::cin>>y;
    std::cout << "Enter 3rd num : ";
    std::cin>>z;

    max = y ;

    if(x>y)
    {
        max=x;
    }
    if(max<z)
    {
        max = z;
    }
    std::cout << "Maximum number : "<<max;
    return 0;
}