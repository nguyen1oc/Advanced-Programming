#include <iostream>
#include <math.h>
#include <string>

int main()
{
    float a, result;
    for (int i = 1; i <= 10; i++){
        std::cout<<" Input student "<<i<<" : ";
        std::cin >> a;
        result += a; 
    }
    std::cout<<"Average of 10: "<<result/10;
}
