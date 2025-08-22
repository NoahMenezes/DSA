
#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name=name;
        this->age=age;

    }
};
class Student:public Person{
    public:
    int rollno ;
    Student(string name, int age, int rollno): Person(name,age){
        this->rollno=rollno;
    }
    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"Rollno:"<<rollno<<endl;
    }

};
int main(void){
    // Student s1;
    // s1.name="Noah Menezes";
    // s1.age=19;
    // s1.rollno=1234;
    
    Student s1("Noah Menezes",19, 1234);
    s1.getinfo();
    cout<<s1.name;
    return 0;
}