#include<iostream>

using namespace std;

int main(){
    for(int i=1;i<=2;i++)
    for(int j=1;j<=2;j++)
    for(int k=1;k<=2;k++)
    for(int l=1;l<=2;l++)
    if(i*i*i + j*j*j == k*k*k + l*l*l  ){
        cout<<i<<" "<<j<<" "<<" "<<k<<" "<<l<<" "<<endl; //program to print smallest hardy number.
    }
    return 0;
}