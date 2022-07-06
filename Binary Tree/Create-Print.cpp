#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
Node * buildTree(){
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    Node *n=new Node(d);
    n->left=buildTree();
    n->right=buildTree();
    return n;
}
// Preorder Traversal  Root->Left->Right
void printPreorder(Node *root){
    if(root==NULL)
        return ;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
void printInorder(Node *root){
    if(root==NULL)
        return ;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPostorder(Node *root){
    if(root==NULL)
        return ;
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node * root=buildTree();
    //INPUT 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 
    printPreorder(root);//1 2 4 5 7 3 6 
    cout<<endl;
    printInorder(root);//4 2 7 5 1 3 6 
    cout<<endl;
    printPostorder(root);//4 7 5 2 6 3 1 
    cout<<endl;


}