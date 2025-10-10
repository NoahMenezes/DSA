#include<iostream>
#include<list>
using namespace std;

class Stack{
    list<int> li;
public:
    void push(int val){
        li.push_back(val);
    }
    void pop(){
        li.pop_back();
    }
    int top(){
        return li.front();
    }
    bool empty(){
        return li.size()==0;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(not s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}