#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int> vec ={1,2,3};
    vec.push_back(25);
    cout<<endl<<"Size:"<<vec.size()<<endl;
    for(int i:vec){
        cout<<i<<endl;
    }
    vector<char> vec1={'a','b','c'};
    for(char i:vec1){
        cout<<i<<endl;
    }
    cout<<"Size:"<<vec.size()<<endl;
    vec.pop_back();
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"Front:"<<vec.front()<<endl;
    cout<<"Back:"<<vec.back()<<endl;
    cout<<"At index 2:"<<vec.at(2)<<endl;

    // static=array
    // Dynamic=vector
    cout<<vec.capacity()<<endl; 

    return 0;
}