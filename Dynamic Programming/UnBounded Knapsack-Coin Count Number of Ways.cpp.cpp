#include <bits/stdc++.h>
using namespace std;
int t[101][101];
int countways(vector <int> &coins,int sum){
    int n=coins.size();
    for(int i=0;i<n+1;i++)
        for(int j=0;j<sum+1;j++){
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    for(int i=1;i<n+1;i++)
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j)
                t[i][j]=t[i][j-coins[i-1]]+t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    return t[n][sum];
}
int main(){
    int sum=4;
    vector <int> coins{1,2,3};
    cout<<countways(coins,sum)<<endl;
}
