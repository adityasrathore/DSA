#include <bits/stdc++.h>
using namespace std;
int lcsubsequence(string x,string y,int m,int n){
    if(n==0 || m==0)
        return 0;
    if(x[m-1]==y[n-1])
        return 1+lcsubsequence(x,y,n-1,m-1);
    else    
        return max(lcsubsequence(x,y,m-1,n),lcsubsequence(x,y,m,n-1));
}
int main(){
    string x="abcdgh";
    string y="abedfhr";
    int m=x.length();
    int n=y.length();
    cout<<lcsubsequence(x,y,m,n)<<endl;
}
