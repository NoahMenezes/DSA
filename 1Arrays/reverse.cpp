#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<end){
            int t=arr[start];
            arr[start]=arr[end];
            arr[end]=t;
            start++;
            end-- ;
        }
    }
}
void printarr(int arr[], int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }

}
int main(void){
    int n,s;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter the values of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Print the values of the array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
    cout<<endl;
    reverse(arr,n);
    cout<<endl;
    printarr(arr,n);
    return 0;
}