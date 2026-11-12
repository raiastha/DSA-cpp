#include<iostream>
using namespace std;
bool findNumber(int arr[],int size,int key){
    if(size==0){
        return false;
    }

    if(arr[0]==key){
       return true;
    }
    else{
        bool remaing=findNumber(arr+1,size-1,key);
        return remaing;
    }

}
int main(){
    int arr[]={3,5,1,2,6};
    int size=5;
    
    int key;
    cout<<"entre the number";
    cin>>key;

    int ans=findNumber(arr,size,key);
    

    if(ans){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}