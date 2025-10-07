#include<iostream>
using namespace std;
// Pass by reference
void changeArr(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i]=2*arr[i];
    }
}
void reverseArr(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(i==j){
                break;
            }
            else{
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
int main(){
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
    // Maximum value of the array
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<endl<<"The max value of the array is "<<max<<endl;
    // Minimum value of the array
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"The min value of the array is "<<min<<endl;
    // Linear search
    cout<<"Enter s:";
    cin>>s;
    int count=0;
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]==s){                             //O(n)
            count=1;
            pos=i+1;
            break;
        }
    }
    if(count==1){
        cout<<"element is found at "<<pos<<" position"<<endl;
    }
    else{
        cout<<"element is not found"<<pos<<" position"<<endl;
    }

    // Pass by reference
    changeArr(arr,n);
    cout<<"Value of the array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
    cout<<endl<<"Reversed array is "<<endl;
    // Reverse the array
    reverseArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<',';
    }
    return 0;

}