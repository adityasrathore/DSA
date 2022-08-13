#include <bits/stdc++.h>
using namespace std;
int findFloor(int a[],int n,int k){
    int i=0;
    int j=n-1;
    int floor=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==k)
            return a[mid];
        if(a[mid]>k)
            j=mid-1;
        else{
            floor=a[mid];
            i=mid+1;
        }
    }
    return floor;
}
int main(){
    int a[]={1,2,3,4,8,10,10,12,19};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<findFloor(a,n,5)<<endl;
}
