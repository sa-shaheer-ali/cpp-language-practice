#include<iostream>
class Node{
    public:
    Node* right=NULL;
    Node * left=NULL;
    int data;
    Node(int value):data(value){}

};
int search(int inorder[],int start, int end ,int curr){
  for (int i = start; i <= end; i++)
  {if (inorder[i]==curr)
  {return i;
    /* code */
  }
  
    /* code */
  }
  return -1;
  
}

Node * buildTree(int inorder[],int preorder[],int start,int end,int &idx){
    if(start>end){
        return nullptr;
    }

   
    int curr=preorder[idx];
    idx++;
    Node *node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(inorder,start,end ,curr);
    node->left=buildTree(inorder,preorder,start,pos-1,idx);
    node->right=buildTree(inorder,preorder,pos+1,end,idx);
    return node;


}
void display(Node * root){
    if  (root==NULL){
        return ;
    }
    display(root->left);
    std::cout<<root->data<<std::endl;
    display(root->right);
}

int main (){

    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
 int n = sizeof(inorder) / sizeof(inorder[0]);
    int idx = 0;

    Node* root = buildTree(inorder, preorder, 0, n - 1, idx);
    display(root);


}