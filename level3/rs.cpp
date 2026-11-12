#include<iostream>
using namespace std;
int main(){
    string str ="hello";
    int n=5;
    int start=0;
    int end=n-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    
        cout<<str;
    

    return 0;
}