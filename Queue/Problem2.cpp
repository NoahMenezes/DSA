#include<iostream>
#include<stack>
using namespace std;
// We are given a stack data structure with push and pop operations, the task is to implementn a queue using instances of stack data structure and operations on them 
class Queue{
    stack<int> st;
    int size;

    public:     
    Queue(){}
    void push(int x){ //queue enqueue           O(1)
        this->st.push(x);


    }
    void pop(){ //queue dequeue                 O(n)
        if(st.empty()){
            return;
        }
        stack<int> tmp;
        while(this->st.size()>1){
            tmp.push(st.top());
            st.pop();
        }
        this->st.pop();
        while(not tmp.empty()){
            this->st.push(tmp.top());
            tmp.pop();
        }
    }
    
    bool empty(){
        return this->st.empty();
    }
    int front(){
    if(this->st.empty()){
        return -1;  // ✅ Return a sentinel value if queue is empty
    }
    stack<int> tmp;
    while(this->st.size() > 1){
        tmp.push(st.top());
        st.pop();
    }
    int result = st.top();  // ✅ Fixed typo: 'ressult' → 'result'
    tmp.push(st.top());
    st.pop();

    while(!tmp.empty()){
        this->st.push(tmp.top());
        tmp.pop();
    }

    return result;  // ✅ Make sure to return the value
}
};
int main(void){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    while(not q.empty()){
        cout<<q.front()<<"->";
        q.pop();
    }
    return 0;
}