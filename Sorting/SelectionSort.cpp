#include <bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j])
                swap(a[i],a[j]);
        }
    }
}
int main(){
    int a[]={10,9,5,-2,4,47,2,0};
    int n=sizeof(a)/sizeof(int);
    selectionsort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}