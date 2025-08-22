#include<iostream>
#include<vector>
#include<map>

#include<unordered_map>
using namespace std;
int main(void){
    map<string, int> a;

    a["tv"]=100;
    a["laptop"]=200;
    a["headphones"]=300;

    a.insert({"camera", 25});
    a.insert({"dog", 10});

    for(auto p:a){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<" count = "<<a.count("laptop")<<endl;
    cout<<" count = "<<a["laptop"]<<endl;
    cout<<endl;
    if(a.find("camera") != a.end()){
        cout<<" found\n";
    }
    else{
        cout<<" not found\n";
    }

    map<string, int> m1;
    m1.emplace("tv", 100);

    for(auto p:m1){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    multimap<string, int> m;
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    unordered_map<string, int> m;
    
    return 0;
}