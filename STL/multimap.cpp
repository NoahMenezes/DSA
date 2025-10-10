#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string, int> m;
    m.insert({"tv",100});
    m.insert({"tv",100});
    m.insert({"tv",100});
    m.insert({"tv",100});
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    m.emplace("remote",25);
    m.erase(m.find("tv"));
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;

}