#include<iostream>
using namespace std;
void PrintArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
}
void SelectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallIdx]){
                smallIdx=j;
            }
        }
        int t;
        t=arr[i];
        arr[i]=arr[smallIdx];
        arr[smallIdx]=t;
    }
}
void SelectionSortReverse(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[smallIdx]){
                smallIdx=j;
            }
        }
        int t;
        t=arr[i];
        arr[i]=arr[smallIdx];
        arr[smallIdx]=t;
    }
}

int main(void){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Print the values of the array:"<<endl;
    PrintArr(arr,n);
    cout<<endl;
    SelectionSort(arr,n);
    cout<<endl<<"Values of the array after Selection Sort:"<<endl;
    PrintArr(arr,n);
    cout<<endl;
    SelectionSortReverse(arr,n);
    cout<<endl<<"Values of the array after Reverse Selection Sort:"<<endl;
    PrintArr(arr,n);
    return 0;
}