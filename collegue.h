#pragma once

#include <iostream>
#include "person.h"

class Collegue: public Person{

    public:
        std::string place_of_work;
        std::string work_email;

        Collegue();
        ~Collegue();
        void print();

};