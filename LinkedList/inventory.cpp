#include<iostream>
using namespace std;
class Node{
    public:
    string itemname;
    int itemCode;
    int quantity;
    float price;
    Node* next=NULL;
    
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=tail=NULL;
    }
    void push_front(string name, int Code, int qty, float price1){
        Node* newNode=new Node();
        newNode->itemname=name;
        newNode->itemCode=Code;
        newNode->quantity=qty;
        newNode->price=price1;
        newNode->next=head;
        head=newNode;
    }
    void pop_front(){
        Node* temp=head;
        if(head==NULL){
            cout<<"LL is empty"<<endl;
            return;
        }
        head=head->next;
        delete temp;
    }
    int search(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->itemCode==key){
                 
                 return idx;
            }
            temp=temp->next;
            idx++;
        }
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->itemname<<","<<temp->itemCode<<","<<temp->price<<","<<temp->quantity<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(void){
    List li;
    li.push_front("Keyboard", 10, 10, 25.5);
    li.push_front("Mouse", 5, 15, 15.0);
    li.push_front("Monitor", 30, 5, 150.0);
    li.print();
    li.pop_front();
    li.print();
    cout<<li.search(10)<<endl;
    return 0;
}
