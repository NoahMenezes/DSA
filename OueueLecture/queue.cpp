#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop(){
        Node* temp=head;
        if(head==NULL){
            cout<<"LL is empty is empty"<<endl;
            return;
        }
        head=head->next;
        delete temp;
    }
    int front(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
        }
        return head->data;
    }
    
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main(void){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.print();
    cout<<endl<<q.front();
    return 0;
}