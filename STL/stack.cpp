#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    stack<int> s1(s);
    while(not s.empty()){
        cout<<s.top()<<"->";
        s.pop();
    }
    cout<<"NULL"<<endl;
    while(not s1.empty()){
        cout<<s1.top()<<"->";
        s1.pop();
    }
    cout<<"NULL"<<endl;
    return 0;
}