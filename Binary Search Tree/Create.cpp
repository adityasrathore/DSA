#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
Node* insert(Node *root,int d){
    if(root==NULL)
        return new Node(d);
    if(root->data>=d)
        root->left=insert(root->left,d);
    else
        root->right=insert(root->right,d);
    return root;
}   
void printInorder(Node* root){
    if(root==NULL)
        return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
int main(){
    Node *root=NULL;
    int a[]={8,3,10,1,6,14,4,7,13};
    for(int i:a)   
        root=insert(root,i);
    printInorder(root);
    return 0;
}