#include <iostream>
#include <math.h>
#include <string>

int ticket(int age){
    if (age < 5) return 0;
    if (age >= 5 && age <=10) return 10;
    if (age >=11 && age <=16) return 20;
    return 25;
}

int main()
{
    int age;
    std::cout<<" Input your age: ";
    std::cin>>age;
    std::cout<<" ================================================\n";
    std::cout<<" |                TICKER PRICES                 |\n";
    std::cout<<" ================================================\n";
    std::cout<<" |   AGE < 5: FREE                              |\n";
    std::cout<<" |   AGE BETWEEN 5 AND 10: $10                  |\n";
    std::cout<<" |   AGE BETWEEN 11 AND 16: $20                 |\n";
    std::cout<<" |   AGE > 16: $25                              |\n";
    std::cout<<" ================================================\n";
    std::cout<< "YOUR TICKER PRICE IS: "<<ticket(age);
    
    return 0;
}
