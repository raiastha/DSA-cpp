// Write a program that takes a number X and checks if it exists in the array. Display "Found" or "NotFound".
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,4,5};
    int target=3;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            cout<<"found"<<endl;
        }
        
    }
    return 0;
}