#include <bits/stdc++.h>
using namespace std;
int t[101][101];
string SCS(string x,string y,int m,int n){
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else    
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    string s;
    int i=m;
    int j=n;
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            s+=x[i-1];
            i--;
            j--;
        }
        else if(t[i][j-1]>t[i-1][j]){
            s+=y[j-1];
            j--;
        }
        else{
            s+=x[i-1];
            i--;
        }
    }
    while(i>0){
        s+=x[i-1];
        i--;
    }
    while(j>0){
        s+=y[j-1];
        j--;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string x="abac";
    string y="cab";
    int m=x.length();
    int n=y.length();
    cout<<SCS(x,y,m,n)<<endl;
}
