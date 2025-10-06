#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

void func(stack<int> st,stack<int> &result ){           //stack using rescursive function
    if(st.empty()){
        return;
    }
        int curr=st.top();
        st.pop();
        func(st,result);
        result.push(curr);
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }

}
void funcInsertAtBottom(stack<int> &st,int x){
    if(st.empty()){
        st.push(40);
        return;
    }
    int curr=st.top();
    st.pop();
    funcInsertAtBottom(st,x);
    st.push(x);
}
void insertAt(stack<int> &st, int x,int idx){
    stack<int> temp;
    int n=st.size();
    int count=0;
    while(count<n-idx){
        count++;
        int curr=st.top();
        st.pop();
        temp.push(curr);

    }
    st.push(x);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}
void removeAtBottom(stack<int> &st){
    stack<int> temp;
    while(st.size()!=1){
        int curr=st.top();
        st.pop();
        cout<<curr<<"->";
    }
    st.pop();
    while(not st.empty()){
        int curr=temp.top();
        temp.pop();
        cout<<curr<<"->";
    } 

}
void remove(stack<int> &st){
    stack<int> t1,t2;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        t1.push(curr);
    }
    while(not t1.empty()){
        int curr=t1.top();
        t1.pop();
        t2.push(curr);
    }
    while(not t2.empty()){
        int curr=t2.top();
        t2.pop();
        st.push(curr);
    }
}
void funcRemove(stack<int> &st){
    if(st.empty()){
        return;
    }
    int curr=st.top();
    st.pop();
    funcRemove(st);
    insertAtBottom(st,curr);
}
int main(void){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    //copyStack

    // stack<int> res;
    // func(st,res);
    // while(not res.empty()){
    //     int curr=res.top();
    //     res.pop();
    //     cout<<curr<<"->";
    // }
    // cout<<"NULL";

    //insert at bottom logic

    // insertAtBottom(st,100);          
    // while(not st.empty()){
    //     int curr=st.top();
    //     st.pop();
    //     cout<<curr<<"->";
    // }
    // cout<<"NULL"<<endl;

    // insert at
    // insertAt(st,100,2);
    // while(not st.empty()){
    //     int curr=st.top();
    //     st.pop();
    //     cout<<curr<<',';
    // }

    // remove at
    // removeAtBottom(st);
    // while(not st.empty()){
    //     int curr=st.top();
    //     st.pop();
    //     cout<<curr<<"->";
    // }
    // cout<<"NULL";

    // remove
    
    // remove(st);
    // while(not st.empty()){
    //     int curr=st.top();
    //     st.pop();
    //     cout<<curr<<"->";
    // }
    // cout<<"NULL";
    
    // func remove
    funcRemove(st);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<"->";
    }
    cout<<"NULL";
    return 0;
}