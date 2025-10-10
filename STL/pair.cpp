#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,int> p={1,5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<endl;
    pair<string, int> name={"Noah",5};
    cout<<name.first<<endl;
    cout<<name.second<<endl;

    cout<<endl;
    pair<int, pair<int, int>> pi={1, {'a',3}};
    cout<<pi.first<<endl;
    // cout<<pi.second<<endl; error
    cout<<pi.second.first<<endl;
    cout<<pi.second.second<<endl;
    cout<<endl;
    vector<pair<int, int>> vec={{1,2}, {2,3}, {3,4}};
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    vec.push_back({5,6}); //insert
    vec.emplace_back(4,5); //in-place objects create

    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }


    return 0;
}