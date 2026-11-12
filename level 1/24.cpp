// Write a program that displays elements at odd indices (1, 3, 5, ...).
#include <iostream>//indices=index
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=1;i<5;i+=2){
        cout<<arr[i]<<endl;
    }
    return 0;}