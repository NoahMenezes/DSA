#include<iostream>
#include<stack>
using namespace std;
int main(void){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    stack<int> s2;
    s2.swap(s);
    cout << "top of s2 = " << s2.top() << endl;
    cout << "Elements in s2: ";
    stack<int> temp = s2;   // make a copy for printing
    while(!temp.empty()){
        cout << temp.top() << ',';
        temp.pop();
    }
    cout << endl;
    cout << "s size: " << s.size() << endl;
    cout << "s2 size: " << s2.size() << endl;
    return 0;
}
