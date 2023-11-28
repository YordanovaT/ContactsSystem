#include "address_book.h"

AddressBook::AddressBook()
{
    contacts_count=0;
}

void AddressBook::add_contact(Person *person)
{
    if(contacts_count>30)
    {
        std::cout<<"Sorry, you have reached the max limit for contacts. Try erasing some.\n";
        return;
    }
    persons[contacts_count]=person;
    contacts_count++;
}

void AddressBook::erase_contact(int id)
{
    int flag=0;
    if(contacts_count==0)
    {
        std::cout<<"Your address book is empty. There's nothing to erase.\n";
        return;
    }
    for(int i=0; i<contacts_count; i++)
    {
        if(id==i+1)
        {
            persons[i]=persons[contacts_count - 1];
            flag=1;
        }
    }
    if(flag)
        contacts_count--;
    else
        std::cout<<"Found no person with the given id\n";
}

void AddressBook::output()
{
    for(int i=0; i<contacts_count; i++)
    {
        std::cout<<i+1;
        persons[i]->print();
    }
}

void AddressBook::search_for_a_contact(Person *person)
{
    std::string fname, lname;
    int flag=0;
    std::cout<<"Enter first name\n";
    std::cin>>fname;
    std::cin.ignore();

    std::cout<<"Enter last name\n";
    std::cin>>lname;
    std::cin.ignore();

    for(int i=0; i<contacts_count; i++)
    {
        if(fname == persons[i]->first_name && lname == persons[i]->last_name)
        {
            std::cout<<i+1;
            persons[i]->print();
            flag=1;
        }
    }

    if(!flag) //it means the flag is still 0
    {
        std::cout<<"Found no contact with the given credentials. Try again.\n";
    }
}

AddressBook::~AddressBook()
{
    for(int i=0; i<contacts_count; i++)
    {
        delete persons[i];
    }
}