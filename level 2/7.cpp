// Write a program that counts how many unique/distinct elements are in the array.
#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={4,1,2,1,2};
    int ans=0;
    for(int val:vec){
        ans^=val;
    }
   
    return ans;}