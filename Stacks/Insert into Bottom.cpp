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
int main(){
    stack <int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    int a=5;
    insertatBottom(s,a);
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}
