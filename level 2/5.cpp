// Write a program that counts how many times a specific element X appears in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,5};
    int target=2;
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]==2){
            count++;
        }
        
    }
    cout<<count;
    return 0;}