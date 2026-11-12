#include<iostream>
using namespace std;
int main(){
    int num=3;
    int *ptr=&num;
    // *ptr=*ptr*2;
     //tells the address 
    cout<<ptr<<endl;
    //tells the value
    cout<<*ptr<<endl;

    //sizeof the integer
    cout<<sizeof(num)<<endl;

    //sizeof the pointer
    cout<<sizeof(ptr);
    return 0;
}