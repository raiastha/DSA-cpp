// Write a program that counts how many elements are in the array (find array size).
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,6,5,3};
    int size= sizeof (arr)/sizeof (int);
    cout<<size;
    return 0;
}