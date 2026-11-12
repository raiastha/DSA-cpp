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

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free"<<endl;
    }
};

    void insertHead(Node* &head,int d){
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }

     void insertTail(Node* &tail,int d){
        Node*temp=new Node(d);
        tail -> next = temp;
        tail = temp;
    }


    void insertMiddle(Node* &head,int middle,int d,Node* &tail){
        if(middle == 1){
            insertHead(head,d);
            return;
        }

        Node* temp = head;
        int cnt=1;

        while(cnt < middle-1){
            temp = temp -> next;
            cnt++;
        }
        if(temp -> next == NULL){
            insertTail(tail,d);
            return;
        }

        Node* insert = new Node(d);
        insert -> next = temp -> next;
        temp -> next = insert;
    }

    void deleteNode(int position,Node* &head){
        if(position==1){
            Node* temp=head;
            head=head -> next;
            //memory free
            delete temp;
        }
        else{
            Node* curr=head;
            Node* prev=NULL;

            int cnt = 1;
            while(cnt<position){
                 prev=curr;
                curr=curr -> next;
                cnt++;
            }
            prev -> next =curr -> next;
            curr -> next = NULL;
            delete curr;
        }
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
    insertTail(tail,40);
    print(head);
    insertMiddle(head,4,30,tail);
    print(head);
    deleteNode(3,head);
    print(head);
    return 0;
}