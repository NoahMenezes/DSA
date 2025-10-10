#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    while (not q.empty())
    {
        /* code */
        cout<<q.top()<<"->";
        q.pop();
    }
    
    cout<<endl;
    cout<<q.size()<<endl;
    
    
}