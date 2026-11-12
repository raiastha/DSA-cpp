// Write a program that calculates the sum of only even numbers in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,3,5};
    int sum=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            sum += arr[i];
        }
        
    }
    cout<<"sum ="<<sum;
    return 0;
}
