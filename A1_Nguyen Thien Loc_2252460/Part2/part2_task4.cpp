#include <iostream>
#include <math.h>
#include <string>

int main()
{
    std::string name, university, major, dob, homet;
    int id, age;
    std::cout<<"Input your name: ";
    std::getline(std::cin, name);
    std::cout<<"Input your university: ";
    std::getline(std::cin, university);
    std::cout<<"Input your major: ";
    std::getline(std::cin, major);
    std::cout<<"Input your date of birth (MM/DD/YY): ";
    std::getline(std::cin, dob);
    std::cout<<"Input your hometown: ";
    std::getline(std::cin, homet);
    std::cout<<"Input your Id: ";
    std::cin>>id;
    std::cin.ignore();
    std::cout<<"Intput your age: ";
    std::cin>>age;
    
    
    std::cout<< " -------------------------------------------------------\n";
    std::cout<< " |                PERSIONAL INFORMATION                |\n";
    std::cout<< " -------------------------------------------------------\n";
    std::cout<< " | Full Name: "<<name<<"\n";
    std::cout<< " | Age: "<<age<<"\n";
    std::cout<< " | Date of Birth: "<<dob<<"\n";
    std::cout<< " | Hometown: "<<homet<<"\n";
    std::cout<< " | University: "<<university<<"\n";
    std::cout<< " | Major: "<<major<<"\n";
    std::cout<< " | Id: "<<id<<"\n";
    std::cout<< " |------------------------------------------------------\n";
    return 0;
}
