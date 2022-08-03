#include <bits/stdc++.h>
using namespace std;
int t[101][101];
int SCSuperSeq(string x,string y,int m,int n){
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }
    for(int i=1;i<m  +1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else    
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return m+n-t[m][n];
}
int main(){
    // string x="aggtab";
    // string y="gxtxayb";
    string x="geek";
    string y="eke";
    int m=x.length();
    int n=y.length();
    cout<<SCSuperSeq(x,y,m,n)<<endl;
}
