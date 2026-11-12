// Write a program that calculates and displays the sum of all elements in an array.
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int num[]={2,4,3,1};
    for(int i=0;i<4;i++){
        sum +=num[i];

    }
    cout<<"sum =" << sum;

    return 0;
}