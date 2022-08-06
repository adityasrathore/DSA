#include <bits/stdc++.h>
using namespace std;
int MCMRec(int a[],int i,int j){
    if(i>=j)
        return 0;
    int m=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=MCMRec(a,i,k)+MCMRec(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(temp<m)
            m=temp;
    }   
    return m;
}
int main(){
    int a[]={10, 20, 30, 40, 30};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<MCMRec(a,1,n-1)<<endl;
}
