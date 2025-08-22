// Destructor-> opp of contrsuctor, dynamically allocated memory
// Inheritance-> When properties and member functions of base class are passed ob the derived class.

#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    double* cgpaPtr;
    Student(string name, double cgpa)
    {
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa ;
    }
    Student(Student &obj){
        this->name=obj.name;
        // this->cgpaPtr=obj.cgpaPtr;
        cgpaPtr= new double;
        *cgpaPtr=*obj.cgpaPtr;

    }

    // destructor
    ~Student(){
        cout<<"Hi, I delete everything\n";
        delete cgpaPtr; //important as memory leak happens
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaPtr<<endl;
    }
};

int main(void){
    Student s1("Noah Menezes", 8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    s2.getInfo();
    s2.name="Nash Menezes";
    *(s2.cgpaPtr)=5.6;
    s2.getInfo();

    return 0;
}