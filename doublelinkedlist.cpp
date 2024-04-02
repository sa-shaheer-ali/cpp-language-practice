#include <iostream>
struct Node {
    Node * next ;
    Node * prev;
    int data ;

};

Node * insert (Node * head,int data){
 Node * newNode= head;
 newNode->data=data;
 newNode->next=head;
 newNode->prev=nullptr;
 return newNode;
}
void display(Node * head){
    Node * current =head;
    while   (current !=nullptr){
        std::cout<<current->data<<" ";
        current =current->next;
    }
    std::cout<<std::endl;

}
int main(){
    Node * head=nullptr;
    head =insert (head,12);
    head =insert(head,23);
    head =insert(head ,90);

    display(head);
    while(head!=nullptr){
        Node * tmp=head;
        head=head->next;
     delete tmp;

    }
    return 0;
    
}
