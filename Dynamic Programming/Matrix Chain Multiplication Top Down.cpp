#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];
int MCMRec(int a[],int i,int j){
    if(i>=j)
        return 0;
    if(t[i][j]!=-1)
        return t[i][j];
    int m=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=MCMRec(a,i,k)+MCMRec(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(temp<m)
            m=temp;
    }   
    t[i][j]=m;
    return t[i][j];
}
int main(){
    int a[]={10, 20, 30, 40, 30};
    int n=sizeof(a)/sizeof(a[0]);
    memset(t,-1,sizeof(t));
    cout<<MCMRec(a,1,n-1)<<endl;
}
