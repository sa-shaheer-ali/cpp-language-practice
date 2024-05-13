#include<iostream>
struct Node{
 int data;
 Node *left;
 Node * right;
  Node (int value ):data( value), left(NULL),right(NULL){}

};
class Binarytree{
    private:
    Node * root;
    void Destroytree( Node * node ){
        if( node!=nullptr){
            Destroytree(node->left);
            Destroytree(node->right);
            
            delete node;
        }
    }
    public:
    Binarytree(){
        root=nullptr;
    }
    ~Binarytree(){
        Destroytree(root);

    }
    void insert(int value){
        root=insertRecursive(root,value);

    }

    Node * insertRecursive(Node * node ,int value){
        if (node==nullptr)
        {
         return new Node(value);

            /* code */
        }
        if (value<node->data)
        {node->left=insertRecursive(node->left,value);
            /* code */
        }
        else if(value>node->data){
            node->right=insertRecursive(node->right,value);

        }
        return node ;

        
        
    }
    void inorderTraversal(Node *node ){
        if (node!=nullptr)
        {inorderTraversal(node->left);
        std::cout<<node->data<<std::endl;
        inorderTraversal(node->right);
            /* code */
        }
        
    }



    void inorder() {
        inorderTraversal(root);
    }

};
int main() {
    Binarytree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(8);
    tree.insert(1);
    tree.insert(4);

    std::cout << "Inorder traversal of binary tree: ";
    tree.inorder();
    std::cout << std::endl;

    return 0;
}
