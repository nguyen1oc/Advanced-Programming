#include <iostream>
#include <math.h>
#include <string>

float Exchange(float choice, float money){
    if (choice == 1) return money / 16244;
    else return money / 24652;
}

int main()
{
    float money,choice;
    std::cout<<" Input your money: ";
    std::cin>>money;
    std::cout<<" ================================================\n";
    std::cout<<" |                EXCHANGE MONEY                |\n";
    std::cout<<" ================================================\n";
    std::cout<<" |   (1) CONVERSION TO AUD                      |\n";
    std::cout<<" |   (2) CONVERSION TO USD                      |\n";
    std::cout<<" ================================================\n";
    std::cout<<"your choice(1,2): ";
    std::cin>>choice;
    std::cout<<"Your Money based on "<<choice<<" is: "<<Exchange(choice,money);
    
    return 0;
}
