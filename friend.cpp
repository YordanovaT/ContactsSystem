#include "friend.h"

Friend::Friend():Person()
{
    std::string addr;
    std::cout<<"Enter address: ";
    std::cin>>addr;
    std::cin.ignore();

    address=addr;
}

void Friend::print()
{
     std::cout<<"\tName: "<<first_name<<" " <<last_name<<"\tPhone: "<<phone<<"\t"<<age<<" years old.\tEmail: "<< personal_email<<"\tAddress: "<<address<<std::endl;
}

Friend::~Friend()
{

}