// oops and c++
// objects are entities in the real world
// class is like a blueprint of these entiies, group of objects
//-> class contains the characteristics of a person, eg) Student->age, name, height, hobby, department, courses

// Encapsulation is wrapping up of data & member functions in a single unit called class, helps in data hiding;
// constructor: special method which is automatically invoked
// -> same name as the className;
// ->only called once
// -> memory allocation happens when the contructor is called once
// type diff: constructor overloading ->polymorphism


// this is a special pointer in c++ that points to the current object
// -> this-> prop is same as *(this).prop


// types of copy constructor
//  shallow copy constructor -> a shallow copy of an object copies all of the member values from one object to another. issue is faced when dynamic memory allocation is used
// deep copy constructor -> a deep copy, on the other hand, not only copied the member values but also makes copied of any dynamically allocated memory that the members point to.

// memory is stored in stack but dyanamically allocated memory is stored in heap.
#include<iostream>
using namespace std;
class Teacher{
    private:
    double salary;
    public:
    // default
    // Teacher(){
    //     dept="Computer Science";
    // }

    // parametrized
    Teacher(string n, string d,string s, double sal){
        name=n;
        dept=d;
        subject=s;
        salary = sal;
    }

    //copy constructor
    Teacher(Teacher &orgobj){
        cout<<" I am custom copy constructor"<<endl;
        this->name = orgobj.name;
        this->dept=orgobj.dept;
        this->subject=orgobj.subject;
        this->salary=orgobj.salary;
    }

    string name;
    string dept;
    string subject;
    void getData(string newDept){
        dept=newDept;
    }
    // setter
    void setSalary(double s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject:"<<subject<<endl;
    }
};
class Account{
    private:
    double balance; //data hiding
    string password;
    public:
    string accountId;
    string username;
    
};
// this property
class property{
    private:
    string name;
    string dept;
    string subject;
    double number;
    public:
    property(string name, string dept, string subject, double number){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->number=number;
    }
    void showData(){
        cout<<"The name is "<<name<<endl;
        cout<<"The dept is "<<dept<<endl;
        cout<<"The subject is "<<subject<<endl;
        cout<<"The number is "<<number<<endl;
    }
};

int main(void){
    // Teacher t1;
    // t1.name="Noah";
    // t1.subject="c++";
    // t1.setSalary(25000);

    // cout<<t1.dept<<endl;



    Teacher t1("Noah", "Computer Science", "C++", 25000);
    t1.getInfo();
    cout<<endl;
    Teacher t2(t1);                     //copy contructor
    t2.getInfo();

    // cout<<endl;
    // property p("Noah","dept", "subject", 20000);
    // p.showData();


    return 0;
}
