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
int heightTree(Node *root){
    if(root==NULL)
        return 0;
    int h1=heightTree(root->left);
    int h2=heightTree(root->right);
    return 1+max(h1,h2);
}

int main(){
    Node * root=buildTree();
    //INPUT 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 
    cout<<heightTree(root)<<endl;
}