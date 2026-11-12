// Write a program that counts how many odd numbers are in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,3,6,5};
    for(int i=0;i<5;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<"odd"<<endl;
        }

    }
}