#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    st.push(5);
    st.pop();
    cout<<st.top()<<endl;
    st.empty();
    cout<<st.empty()<<endl;
    st.push(6);
    st.push(9);
    st.push(11);
    cout<<st.top()<<endl;
    return 0;
}