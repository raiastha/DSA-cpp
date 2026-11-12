// Write a program that swaps the first and last elements of the array.
#include <iostream>
using namespace std;
void swapArray(int arr[],int size){
   
        swap(arr[0],arr[size-1]);
       
    }
    

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    swapArray(arr,size);
    for(int i=0;i<5;i++){
        cout<<"swaped arr"<<arr[i];
    }
    return 0;
}