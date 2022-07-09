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
void printRoot2Leaf(Node *root,vector <int> &v){
    if(root==NULL)
        return ;
    if(root->left==NULL && root->right==NULL){
        for(int i:v)
            cout<<i<<"->";
        cout<<root->data;
        cout<<endl;
    }
    v.push_back(root->data);
    printRoot2Leaf(root->left,v);
    printRoot2Leaf(root->right,v);
    v.pop_back();
    return;
}
int main(){
    Node *root=NULL;
    int a[]={8,3,10,1,6,14,4,7,13};
    for(int i:a)   
        root=insert(root,i);
    vector <int> v;
    printInorder(root);
    cout<<endl;
    printRoot2Leaf(root,v);
    cout<<endl;
    return 0;
}