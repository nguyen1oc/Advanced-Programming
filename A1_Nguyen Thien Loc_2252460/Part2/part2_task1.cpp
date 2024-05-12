#include <iostream>
#include <math.h>
#include <string>

float Exchange(float money){
    return money*24.652;
}

int main()
{
    float money;
    std::cout<<"Enter the money you want: ";
    std::cin >> money;
    std::cout<<"USD: "<<money<<"\n";
    std::cout<<"VND: "<<Exchange(money)<<"\n";
    return 0;
}
