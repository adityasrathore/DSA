#include <bits/stdc++.h>
using namespace std;
int minDiff(int a[],int n,int key){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==key)
            return key;
        else if(a[mid]>key)
            j=mid-1;
        else
            i=mid+1;
    }
    int next=abs(a[i]-key);
    int prev=abs(a[j]-key);
    if(next>prev)
        return a[j];
    else
        return a[i];
}
int main(){
    int a[]={1,3,8,10,15};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<minDiff(a,n,6)<<endl;
}
