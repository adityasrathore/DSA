#include <bits/stdc++.h>
using namespace std;
bool comparator(int a,int b){
    return a<b;
}
// Sort Ascending By default
// Comparator (Both Asec and Desc) 
// Reverse (Desc)
// Greater Desc
int main(){
    int a[]={10,9,5,-2,4,47,2,0};
    int n=sizeof(a)/sizeof(int);
    // sort(a,a+n);
    // sort(a,a+n,comparator);
    // sort(a,a+n,greater <int> ());
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}