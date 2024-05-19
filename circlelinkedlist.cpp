#include<iostream>
class Node {
    public: 
    int data;
    Node * next;
    Node(int value): data( value),next( NULL){}

};
void circleInsert( Node * & tail,int element,int value){

    if (tail==NULL)
    {Node * a= new Node (value);
    tail=a;
    return;
        /* code */
    }

    //insert in the middle or something
else{
    Node* curr=tail;
    while(curr->data!=NULL){
        curr=curr->next;

    }
    Node *temp=new Node( value);
        temp->next=curr->next;
        curr->next=temp;
    }
}