#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;
    }
    bool isEmpty(){
        return this->head=NULL;
    }
    bool isFull(){
        return this->currSize=this->capacity;
    }
    int push(int val){
        Node* newNode=new Node(val);
        if(this->currSize==this->capacity){
            cout<<"Overflow";
            return INT16_MIN;
        }
        newNode->next=this->head;
        this->head=newNode;
        this->currSize++;   
    }
    int pop(){
        if(this->head==NULL){
            cout<<"Underflow"<<endl;
            return INT16_MIN;
        }
        Node* newNode;
        newNode=this->head->next;
        this->head->next=NULL;
        Node* tobeRemoved=this->head;
        int result=tobeRemoved->data;
        delete tobeRemoved;
        this->head=newNode;
        return result;
    }
    int getTop(){
        if(this->head==NULL){
            cout<<"Underflow"<<endl;
            return INT16_MIN;
        }
        return this->head->data;
    }
    int size(){
        return this->currSize;
    }
};
int main(void){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.getTop()<<endl;
    st.pop();
    cout<<st.getTop()<<endl;
    cout<<st.size()<<endl;
    return 0;
}