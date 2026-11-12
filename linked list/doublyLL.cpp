#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    
};
// treversing a linked list
void print(Node*head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
// find length
int getLength(Node*head){
    int len =0;
     Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}   
//insert at head 
void insertHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

//insert at tail
void insertTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head,int position,int d,Node* &tail){
    //starting position
     if(position == 1){
            insertHead(head,tail,d);
            return;
        }
    Node*temp = head;
    int cnt = 1;
    while(cnt < position -1){
         temp = temp -> next;
            cnt++;
        }
        if(temp -> next == NULL){
            insertTail(tail,head,d);
            return;
        }

        Node* needToInsert = new Node(d);
       needToInsert -> next = temp -> next;
        temp -> next -> prev = needToInsert;
        temp -> next = needToInsert;
        needToInsert -> prev = temp;
    
    
}


int main(){
   
    Node*head=NULL;
    Node*tail=NULL;
    print(head);
    //cout<<getLength(head);
    insertHead(head,tail,20);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    insertTail(tail,head,40);
    print(head);
   cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    insertAtPosition(head,3,10,tail);
    print(head);
   cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    insertAtPosition(head,1,50,tail);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    insertAtPosition(head,4,60,tail);
    print(head);
   cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
}