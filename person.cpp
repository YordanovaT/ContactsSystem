#include "person.h"


Person::Person()
{
    std::string f_name, l_name, phone_num;
    int years;

    std::cout<<"Enter first name: \n";
    std::cin>>f_name;
    std::cin.ignore();

    std::cout<<"Enter last name: \n";
    std::cin>>l_name;
    std::cin.ignore();

    std::cout<<"Enter phone number: \n";
    std::cin>>phone_num;
    std::cin.ignore();

    std::cout<<"Enter years: \n";
    std::cin>>years;
    std::cin.ignore();

    first_name=f_name;
    last_name=l_name;
    phone=phone_num;
    age=years;
    id++;

}

void Person::print()
{
    std::cout<<id<<"\tName: "<<first_name<<" " <<last_name<<"\tPhone: "<<phone<<"\t"<<age<<" years old\n";

}

int Person::get_person_id()
{
    return id;
}

Person::~Person()
{

}