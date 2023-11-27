#pragma once

#include <iostream>
#include "person.h"

class Friend : public Person{

    private:
        std::string personal_email= first_name + "." + last_name + "@mail.com";
        std::string address;

    public:
        Friend();
        ~Friend();
        void print();

};