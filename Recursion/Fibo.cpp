#include<iostream>
using namespace std;
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
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fibo(i)<<',';
    }
    return 0;
}