#include<iostream>
#include<vector>            
// taken from queue using array
using namespace std;
class Queue{
    int front;
    int back;
    vector<int> v;
    int cs;  //currentsize
    int ts; //totalsize
    public:
    Queue(int n){
        v.resize(n);
        this->ts=n;
        this->back=n-1;
        this->front=0;
        this->cs=0;
    }
    void enqueue(int data){
        if(isFull()){
            return;

        }
        this->back=(this->back+1)%this->ts;
        this->v[this->back]=data;
        this->cs++;
    }
    
    void dequeue(){
        if(isEmpty()){
            return;
        }
        this->front=(this->front+1)%this->ts;
        this->cs--;
    }
    int getFront(){
        if(this->front==-1){
            return -1;
        }
        return this->v[this->front];
    }
    bool isEmpty(){
        return this->cs==0;
    }
    bool isFull(){
        return this->cs==this->ts;
    }
};
int main(){
    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(400);
    q.enqueue(600);
    while(not q.isEmpty()){
        cout<<q.getFront()<<"->";
        q.dequeue();
    }
    cout<<"NULL"<<endl;
    return 0;
}