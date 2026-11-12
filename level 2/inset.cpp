// Write a program that inserts a new element at position i and shifts remaining elements right.
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>num={1,2,3,4,5};
//     num.push_back(6);
//     for(int i:num){
//     cout<<i;}
//     return 0;}
#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,4,5,6};
    int size=5;
    int index=2;
    int value=3;

    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }

    arr[index]=value;
    size++;

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;}