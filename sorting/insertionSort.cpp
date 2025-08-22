#include<iostream>
using namespace std;
void PrintArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
}
void InsertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void InsertionSortReverse(int arr[], int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
int main(void){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Print the values of the array:"<<endl;
    PrintArr(arr,n);
    cout<<endl;
    InsertionSort(arr,n);
    cout<<endl<<"The values of the array after insertion Sort is "<<endl;
    PrintArr(arr,n);
    cout<<endl;
    InsertionSortReverse(arr,n);
    cout<<endl<<"The values of the array after insertion Sort Reverse is "<<endl;
    PrintArr(arr,n);
    cout<<endl;
    return 0;
}