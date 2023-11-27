#include "address_book.h"
#include "person.h"

int main()
{
    int choice;
    int people;
    int id;
    
    AddressBook AdrBook;
    Person *p=0;
    while (1)
    {
        std::cout<<"--------------------------------------- MENU --------------------------------------- \n";
        std::cout<<"Do you wish to perform an operation? Choose a number between 0-6.\n";
        std::cout<<"1. Add new contact.\n";
        std::cout<<"2. Output contacts.\n";
        std::cout<<"3. Delete contact\n";
        std::cout<<"0. Exit program.\n";

        std::cin>>choice;
        std::cin.ignore();

        if(choice == 0)
        {
            
            break;
        }

        switch (choice)
        {
            case 1:

                std::cout<<"---------------------------------------- Adding new contact ---------------------------------------- \n";
                p= new Person();
                AdrBook.add_contact(p);
                std::cout<<"---------------------------------------------------------------------------------------------------- \n\n";
                break;
            case 2:
                std::cout<<"---------------------------------------- Outputting contacts ---------------------------------------- \n";
                AdrBook.output();
                std::cout<<"---------------------------------------------------------------------------------------------------- \n\n";
                break;
            
            case 3:
                std::cout<<"Enter person ID: ";
                std::cin>>id;
                std::cin.ignore();

                std::cout<<"\n----------------------------------------- Erasing contact ----------------------------------------- \n\n";
                AdrBook.erase_contact(id);
                
                break;
        
        default:
            break;
        }
    }
}