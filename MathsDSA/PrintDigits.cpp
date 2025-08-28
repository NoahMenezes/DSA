#include<iostream>
using namespace std;

void printDigits(int n){
    int count=0;

    while(n!=0){
        int digit = n % 10;
        count++;
        n=n/10;
    }
    cout<<count<<endl;
}
void sumDigits(int n){
    int sum=0;

    while(n!=0){
        int digit = n % 10;
        sum+=digit;
        n=n/10;
    }
    cout<<sum<<endl;
}
int main(void){
    int n=3568;
    printDigits(n);
    sumDigits(n);

    return 0;
}