#include "collegue.h"

Collegue::Collegue():Person()
{
    std::string work;
    std::cout<<"Enter place of work: ";
    std::cin>>work;
    std::cin.ignore();

    place_of_work=work;

    work_email=first_name + "" + last_name + "@"+place_of_work + ".com";
}

void Collegue::print()
{
    std::cout<<"\tName: "<<first_name<<" " <<last_name<<"\tPhone: "<<phone<<"\t"<<age<<" years old.\t";
    std::cout<<"Place of work: "<<place_of_work<<"\tCompany email: "<< work_email<<std::endl;
}

