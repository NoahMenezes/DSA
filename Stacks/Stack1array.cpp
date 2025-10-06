// pushing ->add, pop->remove, LIFO
#include<iostream>
using namespace std;


class Stacks{
    int capacity;
    int * arr;
    int top;
    public:
    Stacks(int c){
        this->capacity=c;
        arr = new int[c];
        this->top=-1;
    }
    void push(int data){
        if(this->top>=this->capacity-1){
            cout<<"Overflow";
            return;
        }
            this->top++;
            this->arr[this->top]=data;
    }
    int pop(){
        if(this->top==-1){
             cout<<"Underflow";
             return -1;
        }
        this->top--;
    }
    int gettop(){
        if(this->top==-1 || this->top>capacity-1){
            cout<<"Invalid";
            return INT16_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty(){
        return this->top==-1;
    }
    int size(){
        return this->top+1;
    }
    bool isFull(){
        return this->top==this->capacity-1;
    }
};
int main(void){
    Stacks st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.gettop()<<endl;
    st.pop();
    cout<<st.gettop()<<endl;
    st.pop();
    
    
}