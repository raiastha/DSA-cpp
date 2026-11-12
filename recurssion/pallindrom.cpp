#include<iostream>
using namespace std;
bool pallindrom(string& str,int low,int high){
     if(low>high){
        return 0;
     }
     if(str[low]!=str[high]){
        return false ;
     }
     else{
        low++;
        high--;
        return true;
     }
     pallindrom(str,low,high);
}
int main(){
    string name ="hello";
   bool ans= pallindrom(name,0,name.length()-1);
    if(ans){
        cout<<"pallindrom";
    }
    else{
        cout<<"not pallindrom";
    }
    return 0;
}