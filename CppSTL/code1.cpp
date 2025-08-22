#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for(int val : vec){
        cout<<val<<",";
    }
    cout<<endl;
    for(int i=4;i<=15;i++){
        vec.push_back(i);
    }
    for(int val : vec){
        cout<<val<<",";
    }
    cout<<endl;
    cout<<vec.size()<< endl; //3
    vec.emplace_back(60);
    for(int val:vec){
        cout<<val<<',';
    }
    cout<<endl;
    cout<<"val at idx 2 is "<<vec[2]<<" or "<<vec.at(2)<< endl;

    cout<<endl;
    cout<<"front "<<vec.front()<<" and back "<<vec.back()<<endl;
    cout<<endl;

    vector<int> vec1(3,10);     //Used in dynamic programming - tabulation DP[][]
    for(int number : vec1)  {
        cout<<number<<',';
    }
    cout<<endl;

    vector<int> vec2(vec1);
    for(int numbers: vec2){
        cout<<numbers<<',';
    }
    cout<<endl;


    // Costly functions
    // erase
    vec.erase(vec.begin());
    for(int val: vec){
        cout<<val<<',';
    }
    cout<<endl;
    vec.erase(vec.begin() +2);
    for(int val: vec){
        cout<<val<<',';
    }
    cout<<endl;
    // vec.erase(vec.begin()+1, vec.begin()+3)
    vec.erase(vec.begin() +1, vec.begin()+3);
    for(int vals: vec){
        cout<<vals<<',';
    }
    cout<<endl;

    // insert
    vec.insert(vec.begin() +2, 100);
    for(int val:vec){
        cout<<val<<',';
    }
    cout<<endl;

    // clear
    vec.clear();
    for(int val: vec){
        cout<<val<<',';
    }
    cout<<endl<<" size : "<<vec.size()<<endl;
    cout<<endl<<" cap :"<<vec.capacity()<<endl;

    // empty
    cout<<" is empty :"<<vec.empty()<<endl;
    return 0;
}
