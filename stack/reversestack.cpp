#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    inseratbottom(s,x);
    s.push(num);
}
void solve(stack<int>&st,int n){
    if(st.empty()){
        return;

    }
    int num = st.top();
        st.pop();
    
        solve(stack);

        insertatbottom(num);

    
}