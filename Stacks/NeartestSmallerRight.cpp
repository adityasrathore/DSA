#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(10);
    v.push_back(8);
    vector <int> ans(5);
    stack <int> s;
    for(int i=v.size()-1;i>=0;i--){
        if(!s.empty() && s.top()<v[i])
            ans[i]=s.top();
        while(!s.empty() && s.top()>=v[i])
            s.pop();
        if(s.empty())
            ans[i]=-1;
        else
            ans[i]=s.top();
        s.push(v[i]);
    }
    for(int i:ans)
    cout<<i<<" ";
    cout<<endl;
}