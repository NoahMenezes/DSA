#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data =val ;
        next=NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;
    public:
    CircularList(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        newNode->next=head;
        // or newNode->next =tail->next    if there is no head
        head=newNode;
        tail->next=head;
    }
    void insertAtTail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }
    void deleteAthead(){
        Node* temp=head;
        if(head==NULL){return;}

        head=head->next;
        tail->next=head;

        temp->next=NULL;
        delete temp;
    }
    void deleteAtTail(){
        Node* temp=head;
        Node* prev=head;
        if(head==NULL){return;}
        else if(head==tail){
            head=tail=NULL;
        }else{
            Node* temp = tail;

            Node* prev=head;
            while(prev->next!=tail){
                prev=prev->next;
            }
        tail=prev;
        tail->next=head;
        }
        
    }
    void Print(){
        if(head==NULL){return;}
        Node* temp=head->next;    
        cout<<head->data<<"->";
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
};
int main(void){
    CircularList cll;
    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);
    cll.Print();
    cll.insertAtTail(9);
    cll.Print();
    cll.deleteAtTail();
    cll.Print();
    return 0;

}