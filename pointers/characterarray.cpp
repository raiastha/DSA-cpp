#include<iostream>
using namespace std;
int main(){
    char ch[6]="abcde";
    // cout<<"1st:"<<ch<<endl;
    // cout<<"2nd:"<<&ch<<endl;
    cout<<"3rd:"<<*(ch)<<endl;
    cout<<"4th:"<<*(ch+1)<<endl;

    // char *c=&ch[0];
    
    // cout<<*c<<endl;
    return 0;
}