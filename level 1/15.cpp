// Write a program that calculates the average of all array elements.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int average=0;
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    average=sum/size;
    cout<<average;
    return 0;
}