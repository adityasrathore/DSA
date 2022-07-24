#include <bits/stdc++.h>
using namespace std;
void sprialPrint(int a[][10],int n,int m){
    int startRow=0;
    int endRow=n-1;
    int startCol=0;
    int endCol=m-1;
    while(startCol<=endCol || startRow<=endRow){
        for(int i=startCol;i<=endCol;i++){
            cout<<a[startRow][i]<<" ";
        }
        for(int i=startRow+1;i<=endRow;i++){
            cout<<a[i][endCol]<<" ";
        }
        for(int i=endCol-1;i>=startCol;--i){
            if(startRow==endRow)
                break;
            cout<<a[endRow][i]<<" ";
        }
        for(int i=endRow-1;i>=startRow+1;--i){
            if(startCol==endCol)
                break;
            cout<<a[i][startCol]<<" ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
    cout<<endl;
}
int main(){
    // int a[][10]={ {1,2,3,4},
    //             {12,13,14,5},
    //             {11,16,15,6},
    //             {10,9,8,7} };
    // int n=4,m=4;
    int a[][10]={ {1,2,3,4,5},
                  {12,13,14,15,6},
                  {11,10,9,8,7} };
    int n=3,m=5; 
    sprialPrint(a,n,m);
    return 0;
}
