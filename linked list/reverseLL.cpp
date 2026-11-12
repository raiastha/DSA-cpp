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
/*node* reversenode(node* &head){
    if(head == NULL || head -> next == NULL){
        return head ;
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
}*/


// recursive solution

void reverse(node*head,node*curr,node*prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    node* forward = curr -> next;
    reverse(head,forward,curr);
    curr -> next = prev;
}

node* reversenode(node* &head){
    node* prev = NULL;
    node* curr = head;
    reverse(head,curr,prev);   
    return head; 
}