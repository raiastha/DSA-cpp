#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4};
    int n=5;
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    
    return 0;
}