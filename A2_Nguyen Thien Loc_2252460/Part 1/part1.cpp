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
    std::cout<<"-------------------------------------------------------------\n";
    std::cout<<"Your choice is: ";
}

void Create(std::string list[],int& quantity){
    int i = 0;
    while(i < quantity){
        std::cout<<"Input your student's name (number "<< i + 1 <<"): ";
        std::cin>>list[i];
        i++;
    }
}

void AddIn(std::string list[], int& quantity){
    quantity += 1;
    std::cout<<"Input your student's name (number "<< quantity <<"): ";
    std::cin>>list[quantity - 1];
}

void Display(std::string list[], int quantity){
    for (int i = 0; i < quantity; i++){
        std::cout<<"Student's name (number "<< i + 1 <<"): "<<list[i]<<std::endl;
    }
}

void Remove(std::string list[], int& quantity){
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
        }
    quantity -=1;
    
    std::cout<<"Remove successfully";
    }else{
    std::cout<<"Name not found\n";
    }
}

int main()
{   
        int quantity = 0, option;
        std::string list[100];
        while (1 > 0){
        Background();
        std::cin>>option;
        if (option == 1){
            std::cout<<"How many students do you want? ";
            std::cin>>quantity;
            Create(list,quantity);
        }else if (option == 2){
            AddIn(list,quantity);
        }else if (option == 3){
            Remove(list,quantity);
        }else if (option == 4){
            Display(list,quantity);
        }else if (option == - 1) break;
        else break;
        }
    std::cout<<"Thank you for using this!!!!";
}