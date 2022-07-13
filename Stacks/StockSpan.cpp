#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(100);
    v.push_back(80);
    v.push_back(60);
    v.push_back(70);
    v.push_back(60);
    v.push_back(75);
    v.push_back(85);
    stack <pair<int,int> > s;
    vector <int> a(v.size());
    for(int i=0;i<v.size();i++){
        if(!s.empty() && s.top().first>v[i])
            a[i]=s.top().second;
        while(!s.empty() && s.top().first<=v[i])
            s.pop();
        if(s.empty())
            a[i]=-1;
        else
            a[i]=s.top().second;

        s.push(make_pair(v[i],i));
    }
    for(int i=0;i<a.size();i++){
        cout<<i-a[i]<<" ";
    }
    cout<<endl;
}