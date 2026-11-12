#include<iostream>
#include<map>
using namespace std;

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

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*,bool>visited;

    Node* temp =head;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}



int main() {

    // Create nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = fourth;

    

    cout << "Without loop: ";

    if (detectLoop(head)) {
        cout << "Loop detected" << endl;
    }
    else {
        cout << "No loop" << endl;
    }

    
    fourth->next = second;

    

    cout << "After creating loop: ";

    if (detectLoop(head)) {
        cout << "Loop detected" << endl;
    }
    else {
        cout << "No loop" << endl;
    }

    return 0;
}