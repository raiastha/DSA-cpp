// Write a program that counts how many even numbers are in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,4,1};
    int size=5;
    
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<"even"<<endl;
        }
        
    }

    return 0;
}