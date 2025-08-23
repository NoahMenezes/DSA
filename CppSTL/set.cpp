#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;

int main(void){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);


    cout<<s.size() <<endl;

    for(auto val : s){
        cout<<val<<" ";
    }
    cout<<endl;


    s.insert(6);

    cout<<" lower bound = "<<*(s.lower_bound(4))<<endl;
    //if 4 is not present to displays the next value 5, if nothing above 4 is present then it displays s.end() value
    

    cout<<" upper bound = "<<*(s.upper_bound(4))<<endl;

    for(auto val:s){
        cout<<val<<',';
    }
    cout<<endl;
    multiset<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    s1.insert(6);
    s1.insert(7);
    s1.insert(8);
    s1.insert(9);
    s1.insert(10);
    for(auto val: s1){
        cout << val << " ";
    }
    cout<<endl;
    unordered_set<int> s2;          //unsorted
    return 0;
}