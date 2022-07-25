#include <bits/stdc++.h>
using namespace std;
int firstOcc(int a[],int n,int key){
    if(n==0)
        return -1;
    if(a[0]==key)
        return 0;
    int index=firstOcc(a+1,n-1,key);
    if(index!=-1)
        return index+1;
        
    return -1;
}

int main(){
    int a[]={0,1,2,7,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int key=7;
    int index=firstOcc(a,n,key);
    cout<<index<<endl;
}
