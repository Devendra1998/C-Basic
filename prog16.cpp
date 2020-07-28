#include<iostream>
#include<math.h>

using namespace std;

int main()
{
   float n, a,b,c;
   cin>>n;
   if(n>0){
       a=(sqrt(n));
       cout<<"Sqrt"<<a<<endl;
   }
  
   else
   {    c=fabsf(n);
        b=(sqrt(c));
       cout<<"Sqrt"<<b<<"i"<<endl;
   }
   
    return 0;
}