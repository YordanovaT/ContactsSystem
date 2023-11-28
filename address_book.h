#pragma once
#include <iostream>
#include "person.h"


class AddressBook
{
    public:
        Person *persons[30];
        int contacts_count;

        AddressBook();
        ~AddressBook();

        void add_contact(Person *person);
        void erase_contact(int id);
        void output(); 
        void search_for_a_contact(Person *person);  

};