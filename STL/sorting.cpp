#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second<p2.second) return true;
    else return false;
}
int main(){
    vector<int> vec={3,4,5,1,2,6};
    sort(vec.begin(), vec.end(), greater<int>());
    for(int p:vec){
        cout<<p<<",";
    }
    cout<<endl;
    vector<pair<int, int>> vecPair={{3,1}, {2,1}, {1,5}, {4,5}};
    cout<<endl;
    sort(vecPair.begin(), vecPair.end());
    for(auto p:vecPair){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    sort(vecPair.begin(), vecPair.end(), comparator);
    for(auto p:vecPair){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}