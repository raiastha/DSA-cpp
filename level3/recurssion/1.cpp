#include <iostream>
using namespace std;
int count=0;
void linear(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    linear(i+1,n);
    
}
int main(){
    linear(1,5);
    return 0;
}