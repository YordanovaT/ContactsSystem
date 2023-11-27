#pragma once

#include <iostream>
#include <string>



class Person
{
    public:
        std::string first_name;
        std::string last_name;
        std::string phone;
        int age;

    
        Person();
        ~Person();
        virtual void print();
};

