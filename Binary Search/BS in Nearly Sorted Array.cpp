#include <bits/stdc++.h>
using namespace std;
int nearlySorted(int a[],int n,int k){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==k)
            return mid;
        if(mid-1>0 && a[mid-1]==k)
            return mid-1;
        if(mid+1<n && a[mid+1]==k)
            return mid+1;
        if(a[mid]>k)
            j=mid-2;
        else
            i=mid+2;
    }
    return -1;
}
int main(){
    int a[]={10, 3, 40, 20, 50, 80, 70};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<nearlySorted(a,n,90)<<endl;
    return 0;
}
