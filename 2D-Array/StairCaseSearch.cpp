#include <iostream>
using namespace std;
pair<int,int> StairCase(int a[][10],int n,int m,int key)
{
    if(a[0][0]>key || a[n-1][m-1]<key){
        return {-1,-1};
    }
    int i=0,j=m-1;
    while(i<n && j>=0){
        if(a[i][j]==key)
            return {i,j};
        else if(a[i][j]>key)
            j--;
        else
            i++;
    }

    return {-1,-1};
}
int main(){
    int a[][10]={ {10,20,30,40},
                  {15,25,35,45},
                  {27,29,37,48},
                  {32,33,39,50} };
    int n=4,m=4;              
    pair<int,int> p = StairCase(a,n,m,25);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
                               
}
