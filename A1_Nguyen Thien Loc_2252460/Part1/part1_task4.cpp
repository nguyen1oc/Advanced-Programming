#include <iostream>
#include <math.h>
#include <string>

float Percent(float x, float y){
    return (y * x)/100;
}

int main()
{
    float x, y, result;
    std:: cin >> x >> y;
    result = Percent(x,y);
    std::cout<<"Percentage x of y is: "<<result;
    return 0;
}
