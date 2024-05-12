#include <iostream>
#include <string>
void Background(){
    std::cout<<"\n-------------------------------------------------------------\n";
    std::cout<<"|                   STUDENTS MAGNEMENT                      |\n";
    std::cout<<"-------------------------------------------------------------\n";
    std::cout<<"Choose your option:\n";
    std::cout<<"    (1) Create list of students\n";
    std::cout<<"    (2) Addin\n";
    std::cout<<"    (3) Delete\n";
    std::cout<<"    (4) Display\n";
    std::cout<<"    (5) Display the best students\n";
    std::cout<<"-------------------------------------------------------------\n";
    std::cout<<"Your choice is (-1 to exit): ";
}

void Create(std::string*& list,int& quantity, float*& score){
    int i = 0;
    list = new std::string[quantity];
    score = new float[quantity];
    while(i < quantity){
        std::cout<<"Input your student's name (number "<< i + 1 <<"): ";
        std::cin>>list[i];
        std::cout<<"Input your student's score (number "<< i + 1 <<"): ";
        std::cin>>score[i];
        i++;
    }
}

void AddIn(std::string*& list,int& quantity, float*& score){
    std::string* temp = new std::string[quantity + 1];
    float* tmp = new float[quantity + 1];
    for (int i = 0; i < quantity; i++){
        temp[i] = list [i];
        tmp[i] = score[i];
    }
    std::cout<<"Input your student's name (number "<< quantity + 1 <<"): ";
    std::cin>>temp[quantity];
    std::cout<<"Input your student's score (number "<< quantity + 1 <<"): ";
    std::cin>>tmp[quantity];
    delete[] list;
    delete[] score;
    list = temp;
    score = tmp;
    quantity++;
}

void Remove(std::string*& list,int& quantity, float*& score){
    std::string name;
    std::cout<<"Which name do you want to remove? ";
    std::cin>>name;
    int found = -1;
    for (int i = 0; i < quantity; i++){
        if(list[i] == name){
            found = i;
            break;
        }
    }
    
    if(found != -1){
        for (int i = found; i < quantity - 1; i++){
            list[i] = list[i+1];
            score[i] = score[i+1];
        }
    quantity --;
    
    std::cout<<"Remove successfully";
    }else{
    std::cout<<"Name not found\n";
    }
}

void Display(std::string*& list,int& quantity, float*& score){
    for (int i = 0; i < quantity; i++){
        std::cout<<"Student's name (number "<< i + 1 <<"): "<<list[i]<<std::endl;
        std::cout<<"Student's score (number "<< i + 1 <<"): "<<score[i]<<std::endl;
    }
}

void DisplayBest(std::string*& list,int& quantity, float*& score){
    int maxS = 0;
    for (int i = 0; i < quantity; i++){
        if (maxS < score[i]){
            maxS = score[i];
        }
    }
    
    for (int i = 0; i < quantity; i++){
        if (maxS == score[i]){
            std::cout<<"Student's name (number "<< i + 1 <<"): "<<list[i]<<std::endl;
            std::cout<<"Student's score (number "<< i + 1 <<"): "<<score[i]<<std::endl;
        }
    }
}

int main()
{   
        int quantity = 0, option;
        std::string* list = nullptr;
        float* score = nullptr;
        while (1 > 0){
        Background();
        std::cin>>option;
            if (option == 1){
                std::cout<<"How many students do you want? ";
                std::cin>>quantity;
                Create(list,quantity,score);
            }else if (option == 2){
                AddIn(list,quantity,score);
            }else if (option == 3){
                Remove(list,quantity,score);
            }else if (option == 4){
                Display(list,quantity,score);
            }else if (option == - 1) {
                break;
            }else if (option == 5){
                DisplayBest(list,quantity,score);  
            }else{}
        }
    delete list;
    delete score;
    std::cout<<"Thank you for using this!!!!";
}