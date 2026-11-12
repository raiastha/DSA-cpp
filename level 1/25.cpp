// Write a program that checks if any number appears more than once in the array. Display "Yes" or "No".
#include <iostream>//indices=index
using namespace std;
int main(){
    int arr[]={1,2,2,4,5};
    int target=2;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }