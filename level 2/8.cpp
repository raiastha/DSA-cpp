// Write a program that rotates the array left by K positions. Example: [1,2,3,4,5], K=2 → [3,4,5,1,2].
#include <iostream>
using namespace std;
void rotateArray(int arr[],int size){
    int start=0;int end=size-3;{
        while(start<end){
            swap(arr[start],arr[end]);
             start++;
             end++;
        }
       
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    rotateArray(arr,size);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;}