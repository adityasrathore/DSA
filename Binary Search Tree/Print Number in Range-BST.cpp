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
void printRange(Node* root,int r1, int r2){
    if(root==NULL)
        return; 
    if(root->data>=r1 && root->data<=r2){
        printRange(root->left,r1,r2);
        cout<<root->data<<" ";
        printRange(root->right,r1,r2);
    }
    else if(root->data>r2)
        printRange(root->left,r1,r2);
    else 
        printRange(root->right,r1,r2);
}
int main(){
    Node *root=NULL;
    int a[]={8,3,10,1,6,14,4,7,13};
    for(int i:a)   
        root=insert(root,i);
    printInorder(root);
    cout<<endl;
    printRange(root,5,13);
    cout<<endl;
    return 0;
}
