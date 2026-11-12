// Write a program that displays each array element with its index number.
#include <iostream>
using namespace std;
int main(){
    int size=5;
    int number[5]={1,2,4,5,4};
  
    
    for(int i = 0; i < 5; i++) {
        cout <<i<<"  "<< number[i] << " ";
    }
    
    return 0;
}