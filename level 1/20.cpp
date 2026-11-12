// Write a program that reverses the array by modifying it. Example: [1,2,3,4,5] becomes [5,4,3,2,1].
#include <iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0;int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    reverseArray(arr,size);
    for(int i=0;i<5;i++){
        cout<<arr[i];

    }
    return 0;
}