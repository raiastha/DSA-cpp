// Write a program that checks if any element appears more than once in the array. Display "Yes" or "No".
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    bool dublicate=false;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j])
            dublicate=true;
        }
    }
    if(dublicate){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;}