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
Node* levelorderBuild(){
    int d;
    cin>>d;
    Node* root=new Node(d);
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;
        if(c1!=-1){
            temp->left=new Node(c1);
            q.push(temp->left);
        }
        if(c2!=-1){
            temp->right=new Node(c2);
            q.push(temp->right);
        }
    }
    return root;
}
int main(){
    Node *root=levelorderBuild();
    // Input 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
    printLevelorder(root);
}