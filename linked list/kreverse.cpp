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
node* kReverse(node* &head,int k){
    if(head==NULL){
        return head;
    }
    node* next= NULL;
    node* curr= head;
    node* prev = NULL;
    int cnt = 0;

    while(curr != NULL&& cnt < k){
        next = curr->next;
        curr -> next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
    return prev;
}