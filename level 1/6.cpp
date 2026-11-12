// Write a program that finds and displays the smallest element in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,9,5,4,7};
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];

        }
    }
    cout<<"min is="<<min;
    return 0;

}