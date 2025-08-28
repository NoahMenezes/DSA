#include<iostream>
#include<vector>
using namespace std;
// mid=(start+end)/2

// TC-> ops n->1, O(log2n) 
int binarySearch(vector<int> arr, int tar){ //Iterative
    int st=0, end=arr.size()-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;

        if(tar>arr[mid]){
            st=mid+1;
        }else if(tar<arr[mid]){
            end=mid-1;
        }else{
            return mid;
        }
    }
}
int recBinarySearch(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid=st+(end-st)/2;

        if(tar>arr[mid]){ //2nd half
            return recBinarySearch(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){
            return recBinarySearch(arr,tar,st,mid+1);
        }else{ //mid->and
            return mid;
        }
    }
}
int main(void){
    vector<int> arr1={-1,0,3,4,5,9,12};
    int tar=12;
    cout<<binarySearch(arr1,tar)<<endl;
    vector<int> arr2={-1,0,3,5,9,12};
    tar=0;
    cout<<binarySearch(arr2,tar)<<endl;
    return 0;

}