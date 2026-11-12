// Write a program that deletes element at position i and shifts remaining elements left.
#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,4,5,6};
    int size=5;
    int index=2;
    // int value=4;

    for(int i=index;i<size-1;i--){
        arr[i]=arr[i+1];
    }

    // arr[index]=value;
    size--;

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;}