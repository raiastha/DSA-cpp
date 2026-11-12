#include<iostream>
using namespace std;
int addition(int arr[],int size){

    if(size==0){
    return 0;}
    if(size==1){
    return arr[0];}

    int remaing=addition(arr+1,size-1);
    int sum=arr[0]+remaing;

    return sum;
}
int main(){
    int arr[]={3,2,5,1,6};
    int size=5;

    int sum=addition(arr,size);

    cout<<"the sum is"<<sum;

    return 0;
}