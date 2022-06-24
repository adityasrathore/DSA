#include <bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j+1]<a[j])
                swap(a[j],a[j+1]);
        }
    }
}
int main()
{
    int a[]={10,9,5,-2,4,47,2,0};
    int n=sizeof(a)/sizeof(int);
    bubblesort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}