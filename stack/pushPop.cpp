#include<iostream>
#include<stack>
using namespace std;
int main(){
    //create stack
    stack<int> s;

    //push value
    s.push(1);
    s.push(2);
    s.push(3);

    //pop element
    s.pop();

    cout<<"top element:"<<s.top()<<endl;
    
    if(s.empty()){
        cout<<"stack is empty.";
    }
    else{
        cout<<"stack is not empty."<<endl;
    }

    cout<<"size of stack is:"<<s.size();
    return 0;
}