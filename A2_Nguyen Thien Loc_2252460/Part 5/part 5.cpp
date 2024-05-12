#include<vector>
#include<iostream>
#include<string>

using namespace std;

class Student{
    private:
        std::string name;
        std::string dob;
        std::string uniN;
        vector<std::string> courseN;
    public:
        Student(const std::string&name, const vector<std::string>& courseN, const string& dob, const string& uniN): name(name), courseN(courseN), dob(dob), uniN(uniN) {}
        ~Student(){}
        virtual void displayInfo() const{
            cout << "Name: " << name << endl;
            cout << "Date of Birth: " << dob << endl;
            cout << "School Name: " << uniN << endl;
            cout << "Courses: ";
            for (const auto& course : courseN) {
            cout << course << ", ";
            }
            cout << endl;
        }
        string getName(){
            return name;
        }
};

class UniStudent:public Student{
    public:
        UniStudent(const std::string&name, const vector<std::string>& courseN, const string& dob, const string& uniN): Student(name,courseN,dob,uniN) {}
        void displayInfo() const override{
            Student::displayInfo();
            cout << "Type: University Student" << endl;
            cout << "Number of Semesters: 8" << endl;
            cout << "Number of Courses per Semester: 4" << endl;
            cout << "Number of Assignments per Course: 3" << endl;
            cout << "Number of Tests per Course: 2" << endl;
            cout << "Number of Exams per Course: 1" << endl;
        }
};

class CollegeStudent:public Student{
    public:
        CollegeStudent(const std::string&name, const vector<std::string>& courseN, const string& dob, const string& uniN): Student(name,courseN,dob,uniN) {}
        void displayInfo()const override{
            Student::displayInfo();
            cout << "Type: College Student" << endl;
            cout << "Number of Semesters: 8" << endl;
            cout << "Number of Courses per Semester: 4" << endl;
            cout << "Number of Assignments per Course: 3" << endl;
            cout << "Number of Tests per Course: 2" << endl;
            cout << "Number of Exams per Course: 1" << endl;
        }
};

class University{
    private:
        vector<Student*> arrange;
        int quantity;
    public:
        University(){}
        ~University(){}
        void CreateU();
        void AddInU();
        void RemoveU();
        void DisplayU();
        
};

void University::CreateU(){
    cout<<"How many students do you want? ";
    cin>>quantity;
    int i = 0;
    for (int i = 0; i < quantity; ++i){
        std::string name, dob, uniN;
        vector<string> courses;
        std::cout<<"Input your student's name (number "<< i + 1 <<"): ";
        std::cin>>name;
        int numCourses;
        std::cout << "How many courses does the student take? ";
        std::cin >> numCourses;
        for (int j = 0; j < numCourses; ++j) {
                string courseN;
                cout << "Input course " << j + 1 << " name: ";
                cin >> courseN;
                courses.push_back(courseN);
            }
        std::cout<<"Input your student's dob (number "<< i + 1 <<"): ";
        std::cin>>dob;
        std::cout<<"Input your student's Uni name (number "<< i + 1 <<"): ";
        std::cin>>uniN;
        std::cout<<"\n------------------------------------------------------";
        char charT;
        Student* newStudent;
        std::cout<<"Is the student a University (u) or College (c): ";
        std::cin>>charT;
        if (charT == 'u'){
            newStudent = new UniStudent(name,courses,dob,uniN);
        }else if (charT == 'c'){
            newStudent = new CollegeStudent(name,courses,dob,uniN);
        }else{
            std::cout<<"Invalid Student";
            continue;
        }
        arrange.push_back(newStudent);
    }
}

void University::AddInU(){
   std::string name, dob, uniN;
    vector<string> courses;
    std::cout<<"Input your student's name (number "<< quantity + 1 <<"): ";
    std::cin>>name;
    int numCourses;
    std::cout << "How many courses does the student take? ";
    std::cin >> numCourses;
    for (int j = 0; j < numCourses; ++j) {
            string courseN;
            cout << "Input course " << j + 1 << " name: ";
            cin >> courseN;
            courses.push_back(courseN);
    }
    std::cout<<"Input your student's dob (number "<< quantity + 1 <<"): ";
    std::cin>>dob;
    std::cout<<"Input your student's Uni name (number "<< quantity + 1 <<"): ";
    std::cin>>uniN;
    std::cout<<"\n------------------------------------------------------";
    char charT;
    Student* newStudent;
    std::cout<<"Is the student a University (u) or College (c): ";
    std::cin>>charT;
    if (charT == 'u'){
        newStudent = new UniStudent(name,courses,dob,uniN);
    }else if (charT == 'c'){
        newStudent = new CollegeStudent(name,courses,dob,uniN);
    }else{
        std::cout<<"Invalid Student";
        return;
    }
    quantity++;
    arrange.push_back(newStudent);
}

void University::RemoveU(){
    std::string name;
    std::cout << "Enter the name of the student you want to remove: ";
    std::cin >> name;
    bool found = false;
    for (auto it = arrange.begin(); it != arrange.end(); ++it) {
        if ((*it)->getName() == name) {
            delete *it; 
            arrange.erase(it); 
            cout << "Student removed successfully!" << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!" << endl;
    }
}

void University::DisplayU(){
   for (const auto& student : arrange) {
        student->displayInfo();
        cout << endl;
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
            }else{}
    }
    std::cout<<"Thank you for using this!!!!";
}
