#include <bits/stdc++.h>
using namespace std;
int t[1001][1001];
bool isPalindrome(string s,int i,int j){
    while(i < j){
      if(s[i] != s[j])
        return false; 
      i++;
      j--;
    }
    return true;
}
int PalindromePartioning(string s,int i,int j){
    if(i>=j)
        return 0;
    if(isPalindrome(s,i,j)==true)
        return 0;
    if(t[i][j]!=-1)
        return t[i][j];
    int m=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=PalindromePartioning(s,i,k)+
        PalindromePartioning(s,k+1,j)+1;
        if(temp<m)
            m=temp;
    }
    return t[i][j]=m;
}
int main(){
    string s="nitik";
    int i=0;
    int j=s.length()-1;
    memset(t,-1,sizeof(t));
    cout<<PalindromePartioning(s,i,j)<<endl;
    return 0;
}
