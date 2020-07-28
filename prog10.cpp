#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number";
    cin>>a;
    for(int i=1;i<=a;i++){
        cout<<"\n";
        for(int j=1;j<=3*a;j++)
        {  cout<<"* ";}}
    for(int i=1;i<=2*a;i++){
        cout<<"\n";
        for(int k=1;k<=a;k++)
         cout<<"  ";
        for(int j=1+a;j<=a+a;j++)
        {  cout<<"* ";}
    }
    return 0;
}