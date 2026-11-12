// Write a program that calculates the product of all elements in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int product=1;
    for(int i=0;i<5;i++){
        product *= arr[i];
    }
    cout<<product;
    return 0;}