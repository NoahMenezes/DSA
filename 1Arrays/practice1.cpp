#include<iostream>
using namespace std;
// sum and product
// max and min of the array
void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
}
void SumProd(int arr[], int n){
    int sum=0;
    int prod=1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
    }
    cout<<endl<<"the sum is "<<sum<<" and the product is "<<prod<<endl;
}
void swap(int arr[], int n){   //swap max and 
    int max=arr[0];
    int start=0,end=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            start=i;
        }
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            end=i;
        }
    }
    for(int i=0;i<n;i++){
        int t=arr[start];
        arr[start]=arr[end];
        arr[end]=t;
    }
}
int main(void){
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter the values of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArr(arr,n);
    cout<<endl;
    SumProd(arr,n);
    cout<<endl;
    
    swap(arr, n);
    cout<<endl;
    printArr(arr,n);
    return 0;
    
}