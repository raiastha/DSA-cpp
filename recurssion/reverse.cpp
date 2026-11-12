#include<iostream>
using namespace std;
void reverseString(string& str,int low,int high){
    if(low>=high){
        return ;
    }
    swap(str[low],str[high]);
   low++;
   high--;
   reverseString( str,low,high);
}
int main(){
     string name="hello";
     
    reverseString(name,0,name.length()-1);
    cout<<name;
   return 0;
}