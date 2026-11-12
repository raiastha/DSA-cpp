// Write a program that counts positive, negative, and zero elements separately in the array.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,-2,0,-4,5};
    int positive=0;
    int negative=0;
    int zero=0;
    for(int i=0;i<5;i++){
        if(arr[i]>0){
           positive++;
        }
         else if(arr[i]<0){
            negative++;
         }
         else{
            zero++;
         }
    }
    cout<<"postive values are="<<positive<<endl;
    cout<<"negative values are="<<negative<<endl;
    cout<<"zero values are="<<zero;

    return 0;
}