#include<iostream>
#include<stack>
using namespace std;
bool isValidParathesis(string expression){
    stack<char>s;
    for(int i=0;i<expression.length(),i++){
        char ch =expression[i];
        //if opening bracket,stack push
        //if close bracket,stckstop check and pop

        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
            char top = s.top();
            if(matches(top,ch)){
                s.pop();
            }
            else{
                return fasle;
            }
            }
            return false;
        }
    }

}

if(st.empty)

int main(){
    
}