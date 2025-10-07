#include<iostream>
using namespace std;
// intersection of two arrays
void printArr(int arr[], int arr1[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<',';
    }
    cout<<endl;
}
void intersection(int arr[],int arr1[], int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr1[j]){
                count=1;
                break;
            }
        }
        if(count==1){
            cout<<arr[i]<<',';
        }
        else{
            continue;
        }
        

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
    int arr1[n];
    cout<<"enter the values of the array:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    printArr(arr, arr1,n);
    intersection(arr,arr1,n);
    return 0;

}