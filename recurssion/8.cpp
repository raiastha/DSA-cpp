#include<iostream>
using namespace std;
void occurrence(int arr[], int size, int key, int index,int &first, int &last) {

    if(index==size){
        return ;
        }

    if(arr[index]==key){
        if(first==-1){
            first=index;

        }
      last=index;
    }
      occurrence(arr,size,key,index+1,first,last);
}
int main(){
    int arr[]={1,2,3,3,4};
    int size=5;
    int key=3;
    int first=-1;
    int last=-1;
    occurrence(arr,size,key,0,first,last);
    cout<<first;
    cout<<last;
    return 0;
}