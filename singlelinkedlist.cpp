#include <iostream> 

struct Node {
    int data;
    Node *next;


};
Node * insert (Node * head ,int  data ){
  
Node * newNode =new Node;
newNode->data=data;
newNode->next=head;
return newNode ;



}

void display(Node * head){
    Node * current =head;
    while (current !=nullptr){
        std::cout <<current->data<<" ";
    current =current->next;
    }
    std::cout <<std::endl;
}

int main (){

    Node * head =nullptr;
    head =insert(head,2);
    head =insert(head,56);
    head =insert(head,43);

    std::cout <<"linked list"<<std::endl;
    display(head);


    while(head != nullptr){
        Node * tmp =head;
        head =head->next;
        delete tmp;
    }

return 0;
}