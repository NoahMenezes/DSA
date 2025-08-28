#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copyN = n;
    int sumofCubes=0;

    while(n!=0){
        int dig=n%10;
        sumofCubes+=(dig*dig*dig);

        n=n/10;

    }

    return sumofCubes = copyN;
}
int main(){
    int n=153;
    if(isArmstrong(n)){
        cout<<n<<" is an armstrong number";
    }
    else{
        cout<<n<<" not an armstrong number";
    }
    return 0;
}
