#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
     while(t--){
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     if(a==b)
     {
         cout<<"yes "<<endl;
     }
     else if(c==d)
     {
         cout<<"No"<<endl;
     }
     
     else if(abs(a-b)%abs(c-d)==0)
     {
         cout<<"Yes"<<endl;
     }
     else
     {
        cout<<"No"<<endl;
     }
     
     }

     return 0;
}
