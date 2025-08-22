// Polymorphism:Polymorphism is the ability to take on different forms or behave in different ways depending on the context in which they are used.
// Two types->(1) Compile time polymorphism, (2) Run time polymorphism
// Compile Time Polymorphism
// Functon overloading: Different parameters, Different function type
// Operator overloading

//Run time polymorphism: 
// Function Overriding-> Parent & Child both contain the same function with different implementation.
// The parent class function is said to be overidden.

#include<iostream>
#include<string>



using namespace std;
int y=10;
int x=y;
string b="abc";
string a=b;
class Student{
    public:
    string name;
    Student(){
        cout<<"non-parametrized";
    }
    Student(string name){
        this->name=name;
        cout<<"Parametrized";
    }
};

class Print{
    public:
    void show(int x){
        cout<<"int:"<<x<<endl;
    }
    void show(char ch){
        cout<<"char :"<<ch<<endl;
    }
};
// Function Overriding-> Parent & Child both contain the same function with different implementation.
// The parent class function is said to be overidden.


// Virtual functions: A virtual function is a member function tha tyou expect to be redefined in derived classes.
// Virtual functions are dynamic in nature.
// Defined by keyowrd "virtual" inside a base class and are always declared with a base class and overidden in a child class.
// A virutal function is called during Runtime.
class Parent{
    public:
    void getInfo(){
        cout<<"Parent class\n";
    }
    virtual void hello(){ //overidding
        cout<<"Hello from parrent\n";
    }
};
class Child: public Parent{
    public:
    void getInfo(){
        cout<<"Child class\n";
    }
    void hello(){ //overidding from virtual
        cout<<"hello from child";
    }
};
// Abstraction: hiding all uncessary details & showing only the important, use of access modifiers.
// another way?
// using abstract classes
// Abstract classes are used to provide a case class from which other classes can be derived.
// They cannnot be instantiated and are meant to be inherited.
// Abstract classes are typically used to define an interface for derived classes.

class Shape{ //abstract class
    virtual void draw()=0;  //pure virtual function
};
class Circle:  public Shape{
    public:
    void draw(){
        cout<<"drawing a circle\n";
    }
};
// Static keyword
// Static Variables: Variables declared as static in a function are created & initalised once for a lifetime of the program. In function 
// Static variables in a class are created & initialised once. They are shared by all the objects of the class. In class
void func(){
    static int x=0;  //stores the ata in the memory
    cout<<"x:"<<x<<endl;
    x+=1 ;
}
class A{
    public:
    int x;
    void inX(){
        x=x+1;
    }
};
class ABC{
    public:
    ABC(){
        cout<<"Constructor\n";
    }
    ~ABC(){
        cout<<"Destructor\n";
    }
};

int main(void){
    // func();
    // func();
    // func();
    // A obj1;
    // A obj2;
    // obj1.x=100;
    // obj2.x=200;
    // cout<<obj1.x<<endl;
    // cout<<obj2.x<<endl;
    if(true){
        static ABC obj;
    }
    cout<<"end of min fnx \n";
    return 0;
}