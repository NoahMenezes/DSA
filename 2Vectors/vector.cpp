#include<iostream>
#include<vector>

using namespace std;

int main(void){
    vector<int> vec={'a','b','c','d','e'};  //0
    cout<<vec[0]<<endl;
    
    // for(int i :vec){
    //     cout<<i<<',';
    // }
    for(char ch:vec){
        cout<<ch<<',';
    }
    vec={1,2,3};
    cout<<endl<<"size="<<vec.size()<<endl;
    vec.push_back(25);
    for(int val:vec){
        cout<<val<<',';
    }
    vec.push_back(10);
    vec.push_back(5);
    vec.pop_back();
    for(int val:vec){
        cout<<val<<',';
    }
    cout<<endl<<vec.front();
    cout<<endl<<vec.back();
    cout<<endl<<vec.at(2)<<endl;
    
    return 0;


}