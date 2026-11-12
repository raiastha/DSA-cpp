#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    Node*p=new Node(10);
    cout<<p->data<<endl;
    cout<<p->next<<endl;
    return 0;
}