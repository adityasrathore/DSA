#include <bits/stdc++.h>
using namespace std;
bool checkSubsetSum(int a[],int sum,int n){
    if(sum==0)
        return true;
    if(n==0 && sum>0)
        return false;
    if(a[n-1]<=sum)
        return checkSubsetSum(a,sum-a[n-1],n-1) || checkSubsetSum(a,sum,n-1);
    else 
        return checkSubsetSum(a,sum,n-1);
}

int main(){
    int a[]={7,8,10};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=11;
    bool x=checkSubsetSum(a,sum,n);
    cout<<x<<endl;
}
