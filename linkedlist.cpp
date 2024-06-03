#include <iostream>
class Node{
    public:
    Node * next;
    int data;
    Node(int value):data(value),next(NULL){};
};

    void insert( Node * & head ,int value){
        Node * temp=head;
        Node * a=new Node ( value);
        if( head== NULL){
            head=a;
            return ;
        }
        while(temp->next!= NULL){
            temp=temp->next;
            }
            temp->next=a;

    }

    void deleteatHead( Node * & head){
        if( head==NULL){
            std::cout<<"cannot delete from empty list"<<std::endl;

        }
        Node* temp=head;
        head=head->next;
        delete temp;

    } 


void deleteAtPosition(Node * & head ,int value){
// if ( position==1){
//     deleteatHead(head);
// }

Node * prev=NULL;
Node * curr=head;
while (curr->next!= NULL)
{prev=curr;
curr=curr->next;
    /* code */
}
prev->next=curr->next;
delete curr;

}

void display(Node * &head){
    Node  *temp=head;
    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }`
}
int main(){
    Node *  head=NULL;
    insert(head,423);
    insert(head,7656);
    insert(head,56);
    deleteAtPosition(head,2);
    display(head);
    return 0;
}