#include<iostream>
using namespace std;
void reverse(int i){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    reverse(i-1);
}
int main(){
    reverse(5);
    return 0;
}