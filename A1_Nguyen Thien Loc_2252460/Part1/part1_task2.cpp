#include <iostream>
#include <math.h>
float sum(float a, float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

float modul(float a, float b){
    return sqrt(pow(a,2)+pow(b,2));
}

float multi(float a, float b){
    return a*b;
}

float divid(float a, float b){
     //-1 means error
     if (b == 0){
         std::cout<<"There is no answer ";
         return -1;
     }
    return a/b;
}

int main()
{
    float a,b;
    std::cin>>a>>b;
    std::cout<<sum(a,b)<<"\n";
    std::cout<<sub(a,b)<<"\n";
    std::cout<<modul(a,b)<<"\n";
    std::cout<<multi(a,b)<<"\n";
    std::cout<<divid(a,b)<<"\n";
    return 0;
}
