#include<iostream>
using namespace std;
int factorial(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int sum(int x){
    if(x==1){
        return 1;
    }
    else{
        return x+sum(x-1);
    }
}
int fibo(int x){
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fibo(x-1)+fibo(x-2);
    }
}
int main(void){
    int a;
    cout<<"Enter a:";
    cin>>a;
    cout<<factorial(a)<<endl;
    cout<<sum(a)<<endl;
    for(int i=1;i<=a;i++){
        cout<<fibo(i)<<',';
    }
    return 0;

}