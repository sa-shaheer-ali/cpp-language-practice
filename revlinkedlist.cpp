#include <iostream>
class Node {
    public:
    int data;
    Node * next;
    Node (int value): data(value),next(NULL){}

};
void rev(Node * head){
    if (head==NULL || head->next==NULL)
    {return;
        /* code */
    }
    Node *prev=NULL;
    Node * curr=head;
    Node * forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }
    head=prev;
    
 
}
int main(){
    Node *head=NULL;
  rev(head)

}