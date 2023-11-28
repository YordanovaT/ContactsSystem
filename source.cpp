#include "address_book.h"
#include "person.h"
#include "friend.h"
#include "collegue.h"

int main()
{
    int choice;
    int people;
    int ID;
    
    //creating class instances
    AddressBook AdrBook;
    Person *p=0;
    Friend *fr=0;
    Collegue *cl=0;

    while (1)
    {
        std::cout<<"--------------------------------------- MENU --------------------------------------- \n";
        std::cout<<"Do you wish to perform an operation? Choose a number between 0-6.\n";
        std::cout<<"1. Add new contact.\n";
        std::cout<<"2. Add new friend contact.\n";
        std::cout<<"3. Add new collegue contact.\n";
        std::cout<<"4. Output contacts.\n";
        std::cout<<"5. Delete contact\n";
        std::cout<<"6. Search for a contact\n";
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

                std::cout<<"--------------------------------------------- Adding new contact --------------------------------------------- \n";
                p= new Person();
                AdrBook.add_contact(p);
                std::cout<<"-------------------------------------------------------------------------------------------------------------- \n\n";
                break;
            case 2:
                std::cout<<"----------------------------------------- Adding new friend contact ----------------------------------------- \n";
                fr= new Friend();
                AdrBook.add_contact(fr);
                std::cout<<"-------------------------------------------------------------------------------------------------------------- \n\n";
                break;

            case 3:
                std::cout<<"---------------------------------------- Adding new collegue contact ---------------------------------------- \n";
                cl= new Collegue();
                AdrBook.add_contact(cl);
                std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
                break;

            case 4:
                std::cout<<"-------------------------------------------- Outputting contacts -------------------------------------------- \n";
                AdrBook.output();
                std::cout<<"------------------------------------------------------------------------------------------------------------- \n\n";
                break;
            
            case 5:
                std::cout<<"Enter person ID: ";
                std::cin>>ID;
                std::cin.ignore();

                std::cout<<"\n-------------------------------------------- Erasing contact -------------------------------------------- \n\n";
                AdrBook.erase_contact(ID);
                
                break;
            case 6:
                std::cout<<"\n-------------------------------------------- Search for a contact -------------------------------------------- \n\n";
                AdrBook.search_for_a_contact(p);
        
        default:
            break;
        }
    }
}