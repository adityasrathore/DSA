#include <bits/stdc++.h>
using namespace std;
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
    int m=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=PalindromePartioning(s,i,k)+
        PalindromePartioning(s,k+1,j)+1;
        if(temp<m)
            m=temp;
    }
    return m;
}
int main(){
    string s="abcde";
    int i=0;
    int j=s.length()-1;
    cout<<PalindromePartioning(s,i,j)<<endl;
    return 0;
}
