#include<iostream>
#include<string>
using namespace std;
class Student{
    int id;
    float salary;
    string name;
    public:
    void getdata(int id1, float salary1 , string name1){
        id=id1;
        salary=salary1;
        name=name1;
    }
    int setData_id(){
        return  id;
    }
    float set_data_salary(){
        return salary;
    }
    string set_data_name(){
        return name;
    }
};

int main(void){
    Student s;
    string name;
    int id;
    float salary;
    cout<<"Enter the id:";
    cin>>id;
    cout<<"Enter the salary:";
    cin>>salary;
    cin.ignore();
    cout<<"Enter the name:";
    getline(cin,name);
    cout<<endl;
    s.getdata(id,salary,name);
    cout<<s.setData_id()<<endl;
    cout<<s.set_data_salary()<<endl;
    cout<<s.set_data_name()<<endl;
    return 0;
}