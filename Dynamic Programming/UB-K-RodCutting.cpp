#include <bits/stdc++.h>
using namespace std;
int t[101][101];
int rodcutting(vector <int>&price,int N){
    vector <int> l;
    for(int i=0;i<8;i++)
        l.push_back(i+1);

    int n=l.size();
    for(int i=0;i<n+1;i++){
        for(int j=0;j<N+1;j++){
            if(i==0 || j==0)
                t[i][j]=0;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<N+1;j++){
            if(l[i-1]<=j)
                t[i][j]=max(price[i-1]+t[i][j-l[i-1]],t[i-1][j]);
            
            else    
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][N];    
}
int main(){
    vector <int> price{1, 5, 8, 9, 10, 17, 17, 20};
    int N=8;
    cout<<rodcutting(price,N)<<endl;

}
