// Write a program that displays elements at even indices (0, 2, 4, ...).
#include <iostream>//indices=index
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i+=2){
       cout<<arr[i];
    }return 0;}