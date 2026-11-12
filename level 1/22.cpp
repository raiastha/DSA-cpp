// Write a program that counts how many numbers in the array are greater than 10.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,12,15,4,6};
    int count=0;
    for(int i=0;i<5;i++){
        if(arr[i]>10){
           count++;
        }
    } cout<<count;
    return 0;}