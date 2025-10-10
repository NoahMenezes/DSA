#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    for(int i=1;i<=6;i++){
        s.insert(i);
    }
    cout<<endl;
    cout<<s.size()<<endl;
    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<s.count(1)<<endl;
    
   
    return 0;
}