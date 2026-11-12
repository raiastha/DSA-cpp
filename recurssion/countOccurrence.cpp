#include<iostream>
using namespace std;
int countOccurrence(int arr[], int size, int key, int index) {

    if(index==size){
        return 0;
        }

    if(arr[index]==key){
        return 1 + countOccurrence(arr,size,key,index+1);

        }
       return  countOccurrence(arr,size,key,index+1);
    }
      

int main(){
    int arr[]={1,2,3,3,4};
    int size=5;
    int key=3;
    
    int count= countOccurrence(arr,size,key,0);
    
    cout<< count;
    return 0;
}