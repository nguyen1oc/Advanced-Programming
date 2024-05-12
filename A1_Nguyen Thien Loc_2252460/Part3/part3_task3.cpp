#include <iostream>
#include <math.h>
#include <string>

float Cal(char op, float a, float b){
    switch (op){
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': 
            if (b == 0){
                std::cout<<"There is no answer ";
            return -1;
            }
            return a/b;
        default:
            std::cout<<"INVALID";
            return -1;
    }
}

int main()
{
    float a,b,result;
    char op;
    std::cin>>a>>b;
    std::cout<<"Choose (+,-,/,*): ";
    std::cin >> op;
    result = Cal(op, a, b);
    std::cout<<"Answer: "<<result;
    return 0;
}
