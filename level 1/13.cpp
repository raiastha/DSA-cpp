// Write a program that counts how many positive numbers are in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,-3,4,-7};
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]>=0){
            count++;
        }
    }
    cout<<count;
    return 0;
}