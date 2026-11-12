#include<iostream>
using namespace std;
class insertHead{
    public:
    int data;
    insertHead*next;
    insertHead(int data){
        this->data=data;
        this->next=NULL;
    }
};
    void insert(insertHead*&head,int d){
        insertHead*temp=new insertHead(d);
        temp->next=head;
        head=temp;
    }
    void print(insertHead*&head){
        insertHead*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }


int main(){
    insertHead*ptr=new insertHead(10);
    insertHead*head=ptr;
    print(head);
    insert(head,12);
    print(head);
    return 0;
}