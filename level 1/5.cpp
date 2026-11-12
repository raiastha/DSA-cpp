// Write a program that finds and displays the largest element in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,7,2};
    int maxelement=arr[0];
    for(int i=0;i<5;i++){
       
        if(arr[i]>maxelement){
            maxelement=arr[i];
        }
    }
cout<<"maxelement"<<maxelement;
  return 0;
}