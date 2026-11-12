// Write a program that finds at which position (index) the minimum element is located.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,4,6};
    int min=0;
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=i;
        }
    }
    cout<<min;
    return 0;}