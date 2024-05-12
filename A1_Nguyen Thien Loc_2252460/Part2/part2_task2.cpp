#include <iostream>
#include <math.h>
#include <string>

const int pi = 3.14;
float Volume(float h, float r){
    return pi*r*r*h; 
}

int main()
{
    float r,h;
    std::cout<<"Input your radius: ";
    std::cin>>r;
    std::cout<<"Input your height: ";
    std::cin>>h;
    std::cout<<"The Volume of Cylinder is: "<<Volume(h,r)<<'\n';
    std::cout<<"The value was caculated with fix pi which mean pi = 3.14,";
    return 0;
}
