#include<iostream>
#include<stack>
using namespace std;
// We are given a stack data strcture with push and pop operations, the task is to implement a queue using instances of stack data strcture and operations on them

class Queue{
    stack<int> st;
    public:
    Queue(){}
    void push(int x){
    stack<int> tmp;  // ✅ Correct variable name
    while(not this->st.empty()){
        tmp.push(this->st.top());  // ✅ Added missing semicolon
        this->st.pop();            // ✅ Fixed 'this->' typo
    }
    this->st.push(x);
    while(!tmp.empty()){
        this->st.push(tmp.top());
        tmp.pop();
    }
}
    void pop(){
        if(this->st.empty()){
            return;
        }
        this->st.pop();
    }
    bool empty(){
        return this->st.empty();
    }
    int front(){
        if(this->st.empty()){
            return INT16_MIN;
        }
        return this->st.top();
    }
};
int main(void){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while(not q.empty()){
        cout<<q.front()<<"->";
        q.pop();
    }
    cout<<"NULL"<<endl;
    return 0;
}