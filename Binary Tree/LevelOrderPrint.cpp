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
void printLevelorder(Node *root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty())
                q.push(NULL);
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}
int main(){
    Node * root=buildTree();
    //INPUT 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1 
    printLevelorder(root);
}