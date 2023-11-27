#include "friend.h"

Friend::Friend():Person()
{
    std::string addr;
    std::cout<<"Enter address: ";
    std::cin>>addr;
    std::cin.ignore();

    address=addr;
    id++;
}

void Friend::print()
{
     std::cout<<id<<"\tName: "<<first_name<<" " <<last_name<<"\tPhone: "<<phone<<"\t"<<age<<" years old.\tEmail: "<< personal_email<<"\tAddress: "<<address<<std::endl;
}

Friend::~Friend()
{

}