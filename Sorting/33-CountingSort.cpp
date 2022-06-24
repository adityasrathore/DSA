#include <bits/stdc++.h>
using namespace std;
void countingsort(int a[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    vector <int> v(max+1,0);
    for(int i=0;i<n;i++){
        v[a[i]]++;
    }

    int j=0;
    for(int i=0;i<=max;i++){
        while(v[i]>0){
            a[j]=i;
            v[i]--; 
            j++;
        }
    }
    return;

}
int main(){
    int a[]={1,5,9,15,0,0,0,1,1};
    int n=sizeof(a)/sizeof(int);
    countingsort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}