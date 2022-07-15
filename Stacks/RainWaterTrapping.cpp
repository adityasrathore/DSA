#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v{0,1,0,2,1,0,1,3,2,1,2,1};
    int n=v.size();
    vector <int> left(n);
    left[0]=v[0];
    vector <int> right(n);
    right[n-1]=v[n-1];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],v[i]);
    }
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],v[i]);
    }
    vector <int> water(n);
    for(int i=0;i<n;i++)
        water[i]=min(right[i],left[i])-v[i];
    int totalWater=accumulate(water.begin(),water.end(),0);
    cout<<totalWater<<endl;
    
}