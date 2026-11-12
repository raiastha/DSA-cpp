// Write a program that counts how many times a specific number X appears in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,1,5,4,6};
    int target=5;
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            count++;
        }

    }
    cout<<count;
    return 0;}