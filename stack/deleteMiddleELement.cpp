#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&inputStack,int count,int size){
    if(count == size/2){
        inputStack.pop();
        return;
    }
    int num =inputStack.top();
    inputStack.pop();

    //recursive call
    solve(inputStack,count+1,size);

    inputStack.push(num)
}

int main(){
    int count =0;
    solve(inputStack,count,N);
    return 0;
}