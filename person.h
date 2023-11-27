#pragma once

#include <iostream>
#include <string>

class Person
{
    public:
        int id=0;
        std::string first_name;
        std::string last_name;
        std::string phone;
        int age;

    
        Person();
        ~Person();
        virtual void print();
        int get_person_id();
        int get_person_age();
        std::string get_fname();
        std::string get_lname();
        std::string get_phone();
};

