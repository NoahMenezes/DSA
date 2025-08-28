#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(void){
    string str="Noah Menezes";
    cout<<str<<endl;


    str="hello";
    cout<<str<<endl;

    char chArr[] = "apna college";
    // chArr="Hello";      error
    
    string str1="Noah ";
    string str2="Menezes";
    string str3=str1+str2;
    cout<<str3<<endl;
    cout<<endl;
    cout<<(str1==str2)<<endl;
    cout<<(str1<str2)<<endl;
    cout<<(str1>str2)<<endl;

    cout<<endl;
    string x="Noah";
    string y="Noah";
    cout<<(x==y)<<endl;

    cout<<endl;
    cout<<str3.length()<<endl;

    string a;
    // cout<<"Enter the string a:";
    // cin>>a;                          Stops taking the values after a space occurs
    // cout<<"output :" <<a<<endl;


    cout<<"Enter the string A:";
    getline(cin, a);
    cout<<"Output: "<<a<<endl;
    cout<<endl;

    for(int i=0;i<str.length();i++){
        cout<<str[i]<<',';
    }
    cout<<endl;

    for(char ch:str){
        cout<<ch<<',';
    }
    cout<<endl;

    int st=0,end=str3.size()-1;

    while(st<end){
        swap(str3[st++], str3[end--]);
    }
    cout<<"Reversed string is "<<str3<<endl;
    reverse(str3.begin(), str3.end()); //iterators

    cout<<"Reversed string is "<<str3<<endl;
    return 0;

}