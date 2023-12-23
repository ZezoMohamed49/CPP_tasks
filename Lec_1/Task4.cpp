
// Decide the letter is vowel or not.

#include<iostream>


main()
{
    char userInput ;
 
    std::string vowel = "aeiouAEIOU";
    std::cout << "Enter a character : ";
    std::cin>>userInput ;

    if(vowel.find(userInput) != std::string::npos)
    {
        std::cout << "Letter is vowel" << std::endl;
    }

}
