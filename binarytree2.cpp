//using level order traversal using queues
#include <iostream>
#include <queue>
class Node{
    public:
    int  data;
   Node * left=NULL;
   Node *right=NULL;
    Node(int value): data(value){}

};

void printLevelOrder(Node *root){
    if(root==NULL){
        return ;
    }

    std::queue<Node *> q;

    q.push(root);
    //q.push(NULL);
    //q.pop();
    while(!q.empty()){
       Node *node=q.front();
       if(node!=NULL){
        std::cout<<node->data<<std::endl;
        if(node->left){
            q.push(node->left);

        }
        if(node->right){
            q.push(node->right);
        }
       }
     else {
        // If the front element is nullptr, it indicates the end of the current level
        // So, if the queue is not empty, push another nullptr to mark the end of the next level
        if (!q.empty())
            q.push(nullptr);
    }


    }

}
int main (){
     // Create a sample binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Print the tree in level order
    printLevelOrder(root);
    return 0;

}