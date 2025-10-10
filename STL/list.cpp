#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    for(int i:l){
        cout<<i<<" ";
    }
    l.pop_back();
    cout<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_front();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}