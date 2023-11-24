#include "person.h"


Person::Person()
{
    std::string name, phone_num;
    int years;

    std::cout<<"Enter name: \n";
    std::cin>>name;
    std::cin.ignore();

    std::cout<<"Enter phone number: \n";
    std::cin>>phone_num;
    std::cin.ignore();

    std::cout<<"Enter years: \n";
    std::cin>>years;
    std::cin.ignore();

    full_name=name;
    phone=phone_num;
    age=years;
    id++;

}

void Person::print()
{
    std::cout<<id<<"\tName: "<<full_name<<"\tPhone: "<<phone<<"\t"<<age<<" years old\n";

}

int Person::get_person_id()
{
    return id;
}

Person::~Person()
{

}