#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

//constructor
    node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};
void reversenode(node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;
    while(curr != NULL){
    node*forward = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = forward;
    
    }
    return prev;
}
int main(){
    
}