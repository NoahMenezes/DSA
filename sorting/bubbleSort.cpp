#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int t;
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
void BubbleSortReverse(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int t;
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
void PrintArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
}
int main(void){
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the values of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    PrintArr(arr,n);
    cout<<endl<<"BubbleSort of the array:"<<endl;
    BubbleSort(arr,n);
    cout<<endl;
    PrintArr(arr,n);
    cout<<endl;
    BubbleSortReverse(arr,n);
    cout<<endl<<"Reverse BubbleSort of the array:"<<endl;
    PrintArr(arr,n);
    cout<<endl;
    return 0;
}