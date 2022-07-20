#include <bits/stdc++.h>
using namespace std;
bool t[100][100];
void checkSubsetSum(int a[],int sum,int n){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
                t[i][j]=false;
            if(j==0)
                t[i][j]=true;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(a[i-1]<=j)
                t[i][j]= (t[i-1][j-a[i-1]] || t[i-1][j]);
            else    
                t[i][j]=t[i-1][j];
        }
    }
}
int main(){
    int a[]={1,2,7};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=10;
    checkSubsetSum(a,sum,n);
    vector <int> v;
    for(int i=0;i<=sum/2;i++){
        if(t[n][i]==true)
            v.push_back(i);
    }
    int m=INT_MAX;
    for(int i=0;i<v.size();i++){
        m=min(m,sum-2*v[i]);
    }
    cout<<m<<endl;
}
