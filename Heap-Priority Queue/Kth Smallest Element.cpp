#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,5,2,8,30,44,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    priority_queue<int> maxh;
    for(int i=0;i<n;i++){
        maxh.push(arr[i]);
        if(maxh.size()>k)
            maxh.pop();
    }
    cout<<maxh.top()<<endl;
    return 0;
}
