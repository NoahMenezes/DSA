#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second )  return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}
int main(void){
    vector<int> arr = {3,4,5,1,2};
    sort(arr.begin(), arr.end(), greater<int>());
    for(int val : arr){
        cout<<val<<' ';
    }
    cout<<endl;
    sort(arr.begin(), arr.end());
    for(int val : arr){
        cout<<val<<' ';
    }
    cout<<endl;
    vector<pair<int, int>> vec = {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vec.begin(), vec.end());
    // sorted based on first value
    for(auto p:vec ){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    // sorting based on second has to be done using boolean comparator
    vector<pair<int, int>> vec1 = {{3,1}, {2,1}, {7,1}, {5,2}};
    sort(vec1.begin(), vec1.end(), comparator);
    for(auto p:vec1 ){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    
    vector<int> x = {1,2,3,4,5};
    reverse(x.begin(), x.end());
    for(auto val :x){
        cout<<val<<" ";
    }
    cout<<endl;

    string s="abc";
    next_permutation(s.begin(), s.end());
    cout<<s<<endl;


    cout<<max(6,10)<<" "<<min(4,5)<<endl;
    int a=5 , b=10;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    cout<<*(max_element(x.begin(), x.end()))<<endl;
    cout<<*(min_element(x.begin(), x.end()))<<endl;
    sort(x.begin(), x.end());  // make sure it's sorted ascending
    cout << (binary_search(x.begin(), x.end(), 4)) << endl;

    

    return 0;
}   