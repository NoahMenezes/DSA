#include<iostream>
using namespace std;

int main(){
    int matrix[4][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int rows=4;
    int cols=3;
    // matrix[2][1]=18;
    // cout<<matrix[2][1]<<endl;
    int arr[3][3];
    int rows1=3;
    int cols1=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Enter the values of the array:"<<endl;

    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<"Print the values of the array:"<<endl;
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}