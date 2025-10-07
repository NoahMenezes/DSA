#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
}
void unique(int arr[], int n){
    for(int i=0;i<n;i++){
        int a=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    count++;
                    break;
                }
            }
        }
        if(count==0){
            cout<<a<<',';
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
    printArr(arr,n);
    cout<<endl;
    unique(arr,n);
    return 0;
}