#include <iostream>
#include <cstdlib>

#ifndef USER_INTERFACE_GUARD
#define USER_INTERFACE_GUARD
int User_Interface_Option = 0;

void Feature_Interface()
{
    
}
void Example_Interface()
{

}

void UserInterface (bool condition)
{
    while (condition == true)
    {
        std::cout << "Entering Options: " << std::endl;
        std::cout << "1. Searching For Features." << std::endl;
        std::cout << "2. Searching For Examples." << std::endl;
        std::cout << "Option: ";
        std::cin >> User_Interface_Option;
        try 
        {
            if (User_Interface_Option == 1)
            {
                Feature_Interface();
            }
            else if (User_Interface_Option == 2)
            {
                Example_Interface();
                
            }
        }
        catch (std::invalid_argument)
        {
            printf("%d is not defined on the scope. Try again or Exit",User_Interface_Option);
            printf("Enter Exit Option (Current = %d): ", condition);
        }
    }
}

#endif