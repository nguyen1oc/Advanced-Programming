#include <iostream>
#include <math.h>
#include <string>
#include <ctime>

const int max = 100;
void PassedOrNot(std::string name[max],int score[max],std::string status[max]){
    for (int j = 1; j <= max; j++){
        if (score[j] == -1) break;
        if (score[j] >= 50){
            status[j] = "passed";
        }else status[j] = "failed";
    }
}
int main() {
    std::string name[max],status[max];
    int score[max];
    for (int i = 1; i <= max; i++){
        std::cout<<"Input your name: ";
        std::cin>>name[i];
        std::cout<<"Input your score: ";
        std::cin>>score[i];
        if (score [i] == -1) break;
    }
    PassedOrNot(name,score,status);
    for (int y = 1; y <= 100 && score[y] != -1; y++){
        std::cout<<"Name: "<<name[y]<<", Score: "<<score[y]<<", Status: "<<status[y]<<"\n";
    }
    
    
    return 0;
}