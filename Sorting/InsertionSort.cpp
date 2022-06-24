#include <bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int current=a[i];  //5 | 4 1 3 2
        int prev=i-1;
        while(prev>=0 && a[prev]>current){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=current;
    }
}
int main(){
    int a[]={5,4,1,3,2};
    int n=sizeof(a)/sizeof(int);
    insertionsort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}