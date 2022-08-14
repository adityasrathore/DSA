#include <bits/stdc++.h>
using namespace std;
int findCeil(int a[],int n,int k){
    int i=0;
    int j=n-1;
    int r=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==k)
            return a[mid];
        if(a[mid]>k){
            r=a[mid];
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return r;
}
int main(){
    int a[]={1, 2, 8, 10, 10, 12, 19};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<findCeil(a,n,0)<<endl;
}
