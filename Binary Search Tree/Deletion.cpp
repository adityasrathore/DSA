#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
Node * buildBST(Node *root,int d){
    if(root==NULL){
        return new Node(d);
    }
    if(root->data>=d)
        root->left=buildBST(root->left,d);
    else
        root->right=buildBST(root->right,d);
    return root;
}
void printInorder(Node* root){
    if(root==NULL)
        return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
Node* findMin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node* deletion(Node* root,int d){
    if(root==NULL)
        return NULL;
    else if(root->data>d)
        root->left=deletion(root->left,d);
    else if(root->data<d)
        root->right=deletion(root->right,d);
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            Node *temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node *temp=root;
            root=root->left;
            delete temp;
        }
        else{
            Node* temp=findMin(root->right);
            root->data=temp->data;
            root->right=deletion(root->right,temp->data);
        }
    }
    return root;
}
int main(){
    Node *root=NULL;
    int a[]={8,3,10,1,6,14,4,7,13};
    for(int i:a)   
        root=buildBST(root,i);
    printInorder(root);
    cout<<endl;
    int d;
    cin>>d;
    root=deletion(root,d);
    printInorder(root);
}