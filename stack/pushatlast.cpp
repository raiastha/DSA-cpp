#include<iostream>
#include<stack>
using namespace std;
void bottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int num = st.top();
    st.pop();

    bottom(st,x);
    st.push(num);
}
int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    bottom(st, 5);

    // Print stack from top to bottom
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
