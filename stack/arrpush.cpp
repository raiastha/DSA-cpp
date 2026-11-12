#include<iostream>

using namespace std;
class stack{
    //data
    public:
    int *arr;
    int top;
    int size;

    //properties
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    //push
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }

    //pop
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"top is not overflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
           return false;
        }
    }
    
};
int main(){
    stack st(5);

    st.push(1);
    st.push(2);  
    st.push(3); 
    st.push(4);
    st.push(5);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stck is full"<<endl;
    }
    return 0;
}