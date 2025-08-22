#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(void){
    deque<int> d = {1,2,3,4,5};
    for(int val :d){
        cout<<val<<" ";
    }
    cout<<endl;


    cout<<d[2]<<endl;

    
    return 0;
}