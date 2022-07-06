#include <bits/stdc++.h>
using namespace std;
bool t[100][100];
bool checkEqualPartition(int a[],int sum,int n){
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
            if(a[i-1]<sum)
                t[i][j]=( t[i-1][j-a[i-1]] || t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][sum];
}
int main(){
    int a[]={1,5,11,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    if(sum%2==1)
        cout<<0<<endl;
    else{
        bool x=checkEqualPartition(a,sum/2,n);
        cout<<x<<endl;
    }
    return 0;
}