#include<iostream>
#include<string>
using namespace std;
template<typename Type>
Type divide(Type x, Type y){
    if(y==0){
        string error="Error has occured";
        throw error;
        return 0;
    }
    else{
        return x/y;
    }
}
int main(void){
    int x,y;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    try{
        cout<<divide(x,y)<<endl;
    }
    catch(string e){
        cout<<e<<endl;
    }
    return 0;
}