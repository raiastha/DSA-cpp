// Write a program that finds both maximum and minimum elements in a single traversal and displays both.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        else if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<min<<endl;
    cout<<max;
    return 0;}