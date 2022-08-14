#include <bits/stdc++.h>
using namespace std;
char findCeil(char a[],int n,char k){
    int i=0;
    int j=n-1;
    char r='#';
    while(i<=j){
        int mid=i+(j-i)/2;
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
    char a[]={'a','b','c','f','h'};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<findCeil(a,n,'f')<<endl;
}
