#pragma once

#include <iostream>
#include <string>

class Person
{
    private:
        int id=0;
        std::string full_name;
        std::string phone;
        int age;

    public:
        Person();
        ~Person();
        virtual void print();
        int get_person_id();
};

