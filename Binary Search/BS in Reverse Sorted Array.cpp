#include <bits/stdc++.h>
using namespace std;
int index(int a[],int n,int k){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==k)
            return mid;
        else if(a[mid]>k)
            i=mid+1;
        else
            j=mid-1;
    }
    return -1;
}
int main(){
    int a[]={20,17,15,14,9,4,3,2};
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;
    cout<<index(a,n,k)<<endl;
}
