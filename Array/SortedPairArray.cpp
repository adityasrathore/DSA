#include<bits/stdc++.h>
using namespace std;
pair <int, int> closestSum(int a[], int n,int x){
    // int n=a.size();
    int l=0,r=n-1;
    int lf=0,rf=0;
    int diff=INT_MAX;
    while (r > l){
       if(abs(a[l]+a[r]-x)<diff){
           lf = l;
           rf = r;
           diff=abs(a[l]+a[r]-x);
       }
       if (a[l]+a[r]>x)
           r--;
       else 
           l++;
    }
    pair <int,int> p(a[lf],a[rf]);
    return p;
}
int main(){
    int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54;
    int n = sizeof(arr)/sizeof(arr[0]);
    pair <int,int> p;
    p=closestSum(arr,n,x);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}