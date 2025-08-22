#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int, int> p = {1,5};
    cout<<p.first<<" ";
    cout<<p.second<<endl;
    pair<string, int> p1 = {"Noah",1};
    cout<<p1.first<<" ";
    cout<<p1.second<<endl;

    pair<int, pair<char, int>> a = {1, {'a',3}};
    cout<<a.first<<endl;
    cout<<a.second.first<<endl;
    cout<<a.second.second<<endl;
    cout<<endl;
    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};
    for(pair<int, int> ans: vec){
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    vec.push_back({4,5});
    vec.emplace_back(4,5);
    // vec.push_back({4,5}); //error
    // vec.emplace_back(4,5);
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    return 0;
}