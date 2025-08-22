#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> vec = {1,2,3,4,5};
    cout<<"vec.begin :"<<*(vec.begin())<<endl;
    cout<<"vec.end :"<<*(vec.end())<<endl;

    vector<int> :: iterator it;
    for(it = vec.begin(); it!=vec.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it = vec.rbegin(); it!=vec.rend(); it++){
        cout<< *(it)<<" ";
    }
    cout<<endl;
    // or
   
    // for( vector<int> :: iterator it = vec.begin(); it!=vec.end(); it++){     ******
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    // for(auto it = vec.rbegin(); it!=vec.rend(); it++){
    //     cout<< *(it)<<" ";
    // }
    // cout<<endl;

    return 0;
}