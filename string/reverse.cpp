#include<iostream>
#include<string>
using namespace std;
int main(){
    string str= "hello" ;
    int low=0;
    int high=str.length()-1;
    while(low<=high){
    swap(str[low],str[high]);
     low++;
     high--;
    
    }
   cout<<str<<endl;
}