#include<iostream>
using namespace std;
// Pass by Reference
int swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}
int main(void){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Before Swap a="<<a<<" and b="<<b<<endl;
    swap(&a,&b);
    cout<<"After Swap a="<<a<<" and b="<<b<<endl;
}