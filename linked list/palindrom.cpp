#include<iostream>
using namespace std;
class solution{
   solution* next = NULL;
   solution*data;
   solution*middle;
    private:
    solution* getMid(solution* head){
    solution*slow = head ;
    solution* fast = head -> next;

    while(fast != NULL || fast -> next != NULL){
         fast = fast -> next -> next;
         slow = slow -> next;
    }
     return slow;
    }

    solution* reverse(solution* head){
        solution* curr = head;
        solution* next = NULL;
        solution* prev = NULL;

        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    public:
    bool isPalindrom(solution* head){
        if(head != NULL || head -> next != NULL){
            return true;
        }
        // get mid
        solution* temp = getMid(head);
        
        //  step 2 reverse node after middle
        solution* temp = middle -> next;
        middle -> next = reverse(temp);

        //  step 3 compare both half
        solution* head1 = head;
        solution* head2 = middle -> next;

        while(head2 != NULL){
            if(head1 -> data != head2 -> data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }

        // repeat step 2
         solution* temp = middle -> next;
        middle -> next = reverse(temp);

        return true;

    }
};