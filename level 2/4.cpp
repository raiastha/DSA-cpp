// Write a program that searches for an element X and returns its first position. Display -1 if not found.
#include <iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i ;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int target=6;
    int size=5;
    cout<<linearsearch(arr,size,target);
    

    return 0 ;}