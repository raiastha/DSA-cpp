#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ="hello";
    int n=str.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        if(str[start]!=str[end]){
            cout<<"not palindrom";
            return 0;
        }

            start++;
            end--;
        
        }
        
        cout<<"palindrom";
        return 0;
    }
    
   
    
