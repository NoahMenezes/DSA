// Mode of Inheritance
// Types of Inheritance->(1) Single Inheritance, (2) Multi-level inheritance, (3)  Multiple Inheritance, (4)Hierarchial Inheritance

#include<iostream>
using namespace std;
// Multiple inheritance
class Person{
    public:
    string name;
    int age;
};
class Student:public Person{
    public:
    int rollno;
};
class GradStudent: public Student{
    public:
    string researchArea;
};
// Multi-level Inheritance
class StudentBoy{
    public:
    string name;
    int rollno;
};
class Teacher{
    public:
    string subject;
    double salary;
};
class TA: public StudentBoy, public Teacher{

};
//Hierarchial Inheritance
class PersonType{
    public:
    string name;
    int age;
};
class StudentType: public Person{
    public:
    int rollno ;

};
class Teacher: public Person{
    public:
    string subject;
};
// Hybrid Heritance
class Parent{
    public:
    string name;
    int age;
};
class StudentStudent: public Parent{
    public:
    int rollno;
};
class Professor: public Parent{
    public:
    float salary;
};
class Grad: public StudentStudent{
public:
float package;
};
class baby: public Professor, public StudentStudent{
    public:
    int dateOfBirth;
    int monthOfBirth;
    int yearofBirth ;
};

int main(void){
    GradStudent s1;
    // s1.name="Noah menezes";
    // s1.researchArea="Computer Science";
    // cout<<s1.name<<endl;
    // cout<<s1.researchArea<<endl;
    // cout<<endl;
 
    // TA  t1;
    // t1.name="Noah Menezes";
    // t1.subject="Engineering";
    // cout<<t1.name<<endl;
    // cout<<t1.subject<<endl;
    return 0;
}
