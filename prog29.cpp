#include<iostream>
#include<stdio.h>

using namespace std;

void print(int *A, int m, int n ){
    // int t=0, b=m, l=0, r, dir=0;
    // r=n;
    // while(l<=r && t<=b){
    //     if(dir==0){
    //        for(int k=l;k<=r;k++){
    //             cout<<A[t][k];
    //             t++;
    //         }
    //     }
    //     else if(dir==1){
    //         for(int k=t;k<=b;k++){
    //             cout<<A[k][r];
    //             r--;
    //         }
    //     }
    //     else if(dir==2){
    //         for(int k=r;k>=l;k--){
    //             cout<<A[b][k];
    //             b--;
    //         }
    //     }
    //     else if(dir==3){
    //         for(int k=b;k>=t;k--){
    //             cout<<A[k][l];
    //             l+=1;
    //         }
    //     }
    //     dir=(dir+1)%4;
    // }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<A[i]<<" ";
        }
    }

}

int main(){   
    
    int m,n;
    cin>>m;
    cin>>n;
    int A[m+1][n+1];

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>A[i][j];
        }
    }

    print((int *)A, m, n);
    return 0;
}