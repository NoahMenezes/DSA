#include<iostream>
#include<vector>
// push_back(), pop_back(), front(), back(), capacity(), size(), erase(), begin()

using namespace std;
int main(){
    vector<int> vec;
    cout<<vec.size()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    for(int i:vec){
        cout<<i<<"->";
    }
    cout<<"NULL"<<endl;
    cout<<vec.size()<<endl;
    vector<int>vec1(vec);
    for(int i:vec1){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<vec.capacity()<<endl;
    vec.pop_back();
    for(int i:vec){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    vec.erase(vec.begin()+1, vec.end()+2);
    for(int i:vec){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<vec.size()<<endl;
}