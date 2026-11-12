#include<iostream>
#include<string>
using namespace std;
 bool checkPalindrom(char s[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){
    if(s[low]!=s[high]){
        return 0 ;
    }
    else{
     low++;
     high--;
    }
    }
    return 1;
}
int main(){
    char name[20];
    int len=5;
    cout<<"entre the name"<<endl;
    cin>>name;

    cout<<"palindrom yes or no : "<<checkPalindrom(name,len)<<endl;
   
}