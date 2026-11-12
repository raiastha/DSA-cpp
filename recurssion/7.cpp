#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){

    if(start>end){
        return false;
    }

    int mid=start+end/2;

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int key=3;

    cout<<binarySearch(arr,0,5,key);

    return 0;
}