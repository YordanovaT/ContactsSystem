#pragma once

#include <iostream>
#include "person.h"

class Friend : public Person{

    private:
        std::string personal_email= get_fname() + "." + get_lname() + "@mail.com";
        std::string address;

    public:
        Friend();
        ~Friend();
        void print();

};