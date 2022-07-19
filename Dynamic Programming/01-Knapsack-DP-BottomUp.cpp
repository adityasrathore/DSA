#include <bits/stdc++.h>
using namespace std;
int t[100][100];
int knapsackDPTopDown(int wt[],int v[],int W,int n){
    for(int i=0;i<n+1;i++)
        for(int j=0;j<W+1;j++)
            if(i==0 || j==0)
                t[i][j]=0;
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1]<=j)
                t[i][j]=max(v[i-1]+t[i-1][j-wt[i-1]],
                        t[i-1][j]);
            else   
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][W];
}
int main(){
    int wt[]={10,20,30};
    int v[]={60,100,120};
    int n=sizeof(v)/sizeof(v[0]);
    int W=50;
    int maxprofit=knapsackDPTopDown(wt,v,W,n);
    cout<<maxprofit<<endl;
    return 0;
}
