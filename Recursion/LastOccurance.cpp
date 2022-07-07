#include <bits/stdc++.h>
using namespace std;

int lastOcc(int a[],int n,int key){
    if(n==0)
        return -1;
    int index=lastOcc(a+1,n-1,key);
    if(index==-1){
        if(a[0]==key)
            return 0;
        else 
            return -1;
    }
    else    
        return index+1;
}
int main(){
    int a[]={0,1,2,7,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int key=7;
    int index=lastOcc(a,n,key);
    cout<<index<<endl;
    
}