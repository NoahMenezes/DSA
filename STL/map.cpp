#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> m;
    m["tv"]=100;
    m["laptop"]=100;
    m["headphones"]=50;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.insert({"camera", 25});
    m.emplace("remote",10);
    cout<<endl;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    cout<<"value="<<m["laptop"]<<endl;
    cout<<"count="<<m.count("laptop")<<endl;
    cout<<endl;
    if(m.find("camera")!=m.end()){
        cout<<"found\n";
    }
    else{
        cout<<"not found\n";
    }
    return 0;
}   