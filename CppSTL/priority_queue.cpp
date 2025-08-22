#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(void){
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(5);
    q.push(3);
    q.push(4);
    q.push(10);
    while(!q.empty()){
        cout << q.top() <<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}