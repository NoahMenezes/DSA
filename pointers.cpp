// Pointers:Special variables that store address of other variables .
#include<iostream>
using namespace std;
int main(void){
    // int a=5;
    // int* ptr=&a;
    // int** parPtr=&ptr;
    // cout<<ptr<<endl;
    // cout<<parPtr<<endl;
    // cout<<** parPtr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&a<<endl;
    // cout<<&ptr<<endl;
    // cout<<&parPtr<<endl;
    // cout<<endl;
    // int* ptr1=NULL;
    // cout<<ptr1<<endl;
    // cout<<*ptr1<<endl;
    // cout<<&ptr1<<endl;
    // cout<<endl;
    

    int x=5;
    int *p=&x;
    int **p1=&p;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p1<<endl;
    return 0;       
}