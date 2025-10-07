#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {8,9,5,6,0,3,4};
    
    // Method 1: Using std::greater (min-heap)
    priority_queue<int, vector<int>, std::greater<int>> Q;
    for(int x:v){Q.push(x);}
    while(!Q.empty()){
        cout<<Q.top()<<" ";
        Q.pop();
    }
    cout << endl;
    
    // Method 2: Using custom comparator with lambda
    auto cmp = [](int a, int b){
        return a > b; // For min-heap (ascending order)
    };
    
    priority_queue<int, vector<int>, decltype(cmp)> Q2(cmp);
    
    for(int x : v){
        Q2.push(x);
    }
    
    cout << "Min-Heap with custom comparator: ";
    while(!Q2.empty()){
        cout << Q2.top() << " ";
        Q2.pop();
    }
    cout << endl;
    
    return 0;
}