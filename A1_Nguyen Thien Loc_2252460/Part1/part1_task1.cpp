#include <iostream>

float averageOf3(float a, float b, float c){
    return (a+b+c)/3;
}

int main()
{
    float a,b,c;
    std::cin>>a>>b>>c;
    int result = averageOf3(a,b,c);
    std::cout<<result;
    return 0;
}
