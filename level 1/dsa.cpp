// Write a program that takes 5 numbers as input, stores them in an array, and displays all elements.
#include <iostream>
using namespace std;
int main(){
    int size=5;
    int number[size];
  
    int i;
    for(i=0;i<5;i++){
        cout<<"Enter a number";
        cin>>number[i]; 
    }
    
    for(int i = 0; i < 5; i++) {
        cout << number[i] << " ";
    }
    
    return 0;
}
