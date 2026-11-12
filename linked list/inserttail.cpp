#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this -> data = data;
        this -> next = NULL; 
    }
};
    void insert(Node* &head,int b){
    Node* temp = new Node(b);
    temp -> next = head;
    head=temp;
    }


    void insertTail(Node* &tail,int d){
        Node*temp=new Node(d);
        tail -> next = temp;
        tail = temp;
    }

    void print(Node* &head){
        Node*temp = head;
        while(temp!= NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout<<endl;
    }
int main(){
    Node*t=new Node(10);
    Node*head=t;
    Node*tail=t;
    print(head);
    insertTail(tail,20);
    print(head);
    insertTail(tail,30);
    print(head);

    return 0;
}