// Write a program that copies all elements from one array to another array.
#include <iostream>
using namespace std;

int main(){
    int arr1[]={1,2,5,4,6};
    int size=5;
    
    int arr2[5];
    for(int i=0;i<5;i++){
        arr2[i]=arr1[i];
        cout<<arr2[i];
    }
    
    return 0;}