#include <bits/stdc++.h>
using namespace std;
int t[100][100];
int knapsackDPmem(int wt[],int v[],int W,int n){
    if(W==0 || n==0)
        return 0;
    if(t[n][W]!=-1)
        return t[n][W];
    if(W>=wt[n-1]){
        return t[n][W]=max(v[n-1]+knapsackDPmem(wt,v,W-wt[n-1],n-1),
                            knapsackDPmem(wt,v,W,n-1));
    }
    else    
        return knapsackDPmem(wt,v,W,n-1);
}
int main(){
    int wt[]={10,20,30};
    int v[]={60,100,120};
    int n=sizeof(v)/sizeof(v[0]);
    int W=50;
    memset(t,-1,sizeof(t));
    int maxprofit=knapsackDPmem(wt,v,W,n);
    cout<<maxprofit<<endl;
    return 0;
}
