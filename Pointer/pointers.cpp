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

    int arr[]={1,2,3,4,5,6};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    
    int *ptr1;
    int *ptr2;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<(ptr1>ptr2)<<endl;


    int array[]={10,20, 30,40};
    int *ptr =array;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*ptr<<endl;
    return 0;       
}