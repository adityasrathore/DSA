#include <bits/stdc++.h>
using namespace std;
int t[100][100];
bool checkSubsetSum(int a[],int sum,int n){
    memset(t,-1,sizeof(t));
    if(sum==0)
        return 1;
    if(n==0 && sum>0)
        return 0;
    if(t[n][sum]!=-1)
        return t[n][sum];
    if(a[n-1]<=sum)
        return t[n][sum]=(checkSubsetSum(a,sum-a[n-1],n-1) || checkSubsetSum(a,sum,n-1));
    else    
        return t[n][sum]=checkSubsetSum(a,sum,n-1);
}
int main(){
    int a[]={2,3,7,8,10};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=11;
    bool x=checkSubsetSum(a,sum,n);
    cout<<x<<endl;
}
