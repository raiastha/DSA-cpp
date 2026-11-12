// Write a program that rotates the array left by K positions. Example: [1,2,3,4,5], K=2 → [3,4,5,1,2].
#include <iostream>
using namespace std;
void leftRotation(int arr[],int size,int k){
    k=k%size;
    int temp[k];
    for(int i=0;i<k;i++){//store the value in temp
        temp[i]=arr[i];
    }
    for(int i=k;i<size;i++){//shift the values
        arr[i-k]=arr[i];
    }
    for(int i=size-k;i<size;i++){
        arr[i]=temp[i-(size-k)];//putting the value of temp in the arr 
    }

}
int main(){
    int size=5;
    
    int arr[]={1,2,3,4,5};
    
    int k=2;
    
    leftRotation(arr,size,k);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;}
    
   