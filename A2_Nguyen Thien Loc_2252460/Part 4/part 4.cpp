
#include<iostream>
#include<string>

using namespace std;\

class Student{
    private:
        string* list = nullptr;
        float* score = nullptr;
        string* dob = nullptr;
        string* uniN = nullptr;
        int quantity;
    public:
        Student(): list(nullptr), score(nullptr), quantity(0), dob(nullptr), uniN(nullptr) {}
        ~Student(){
            delete[] list;
            delete[] score;
        }
        void Create();
        void AddIn();
        void Remove();
        void Display();
        void DisplayBest();
};

class UniStudent:public Student{
    
};

class CollegeStudent:public Student{
    
};

class University{
    private:
        Student arrange;
    public:
        University(){}
        ~University(){}
        void CreateU(){
            arrange.Create();
        }
        void AddInU(){
            arrange.AddIn();
        }
        void RemoveU(){
            arrange.Remove();
        }
        void DisplayU(){
            arrange.Display();
        }
        void DisplayBestU(){
            arrange.DisplayBest();
        }
};

void Student::Create(){
    cout<<"How many students do you want? ";
    cin>>quantity;
    int i = 0;
    list = new std::string[quantity];
    score = new float[quantity];
    dob = new std::string[quantity];
    uniN = new std::string[quantity];
    while(i < quantity){
        std::cout<<"Input your student's name (number "<< i + 1 <<"): ";
        std::cin>>list[i];
        std::cout<<"Input your student's score (number "<< i + 1 <<"): ";
        std::cin>>score[i];
        std::cout<<"Input your student's dob (number "<< i + 1 <<"): ";
        std::cin>>dob[i];
        std::cout<<"Input your student's Uni name (number "<< i + 1 <<"): ";
        std::cin>>uniN[i];
        i++;
    }
}

void Student::AddIn(){
    std::string* temp = new std::string[quantity + 1];
    float* tmp = new float[quantity + 1];
    std::string* inx = new std::string[quantity + 1];
    std::string* tmx = new std::string[quantity + 1];
    for (int i = 0; i < quantity; i++){
        temp[i] = list [i];
        tmp[i] = score[i];
    }
    std::cout<<"Input your student's name (number "<< quantity + 1 <<"): ";
    std::cin>>temp[quantity];
    std::cout<<"Input your student's score (number "<< quantity + 1 <<"): ";
    std::cin>>tmp[quantity];
    std::cout<<"Input your student's dob (number "<< quantity + 1 <<"): ";
    std::cin>>dob[quantity];
    std::cout<<"Input your student's Uni name (number "<< quantity + 1 <<"): ";
    std::cin>>uniN[quantity];
    delete[] list;
    delete[] score;
    delete[] dob;
    delete[] uniN;
    list = temp;
    score = tmp;
    dob = inx;
    uniN = tmx;
    quantity++;
}

void Student::Remove(){
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
            dob[i] = dob[i+1];
            uniN[i] = uniN[i+1];
        }
    quantity --;
    
    std::cout<<"Remove successfully";
    }else{
    std::cout<<"Name not found\n";
    }
}

void Student::Display(){
     for (int i = 0; i < quantity; i++){
        std::cout<<"name: "<<list[i]<<",";
        std::cout<<" score: "<<score[i]<<",";
        std::cout<<" dob: "<<dob[i]<<",";
        std::cout<<" uniN"<<uniN[i]<<std::endl;
    }
}

void Student::DisplayBest(){
    int maxS = 0;
    for (int i = 0; i < quantity; i++){
        if (maxS < score[i]){
            maxS = score[i];
        }
    }
    
    for (int i = 0; i < quantity; i++){
        if (maxS == score[i]){
            std::cout<<"name: "<<list[i]<<",";
            std::cout<<" score: "<<score[i]<<",";
            std::cout<<" dob: "<<dob[i]<<",";
            std::cout<<" uniN"<<uniN[i]<<","<<std::endl;
        }
    }
}

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


int main()
{
    int option;
    University uni;
    while (1 > 0){
        Background();
        std::cin>>option;
            if (option == 1){
                uni.CreateU();
            }else if (option == 2){
                uni.AddInU();
            }else if (option == 3){
                uni.RemoveU();
            }else if (option == 4){
                uni.DisplayU();
            }else if (option == - 1) {
                break;
            }else if (option == 5){
                uni.DisplayBestU();  
            }else{}
    }
    std::cout<<"Thank you for using this!!!!";
}
