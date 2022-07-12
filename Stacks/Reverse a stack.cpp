#include <bits/stdc++.h>
using namespace std;
void insertatBottom(stack <int> &s,int a){
    if(s.empty()){
        s.push(a);
        return;
    }
    int temp=s.top();
    s.pop();
    insertatBottom(s,a);
    s.push(temp);
}
void reverse(stack <int> &s){
    if(s.empty())
        return;
    int t=s.top();
    s.pop();
    reverse(s);
    insertatBottom(s,t);
}
int main(){
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
