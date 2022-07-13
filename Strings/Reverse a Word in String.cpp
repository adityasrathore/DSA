#include <bits/stdc++.h>
using namespace std;
string rev(string str){
    vector <string> v;
    int start=0;
    int len=0;
    for(int i=0;i<str.length();i++){
        start=i;
        if(str[i]!=' '){
            len=0;
            while(str[i]!=' '){
                len++;
                i++;
            }
            v.push_back(str.substr(start,len));
        }
    }
    string s;
    for(int i=v.size()-1;i>=0;i--){
        s.append(v[i]);
        s.append(" ");
    }
    return s;
}
int main()
{
    string s="Hello World Aditya";
    string x=rev(s);
    cout<<x<<endl;
    return 0;
}
