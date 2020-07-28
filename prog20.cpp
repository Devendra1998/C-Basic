#include<iostream>
#include<math.h>
using namespace std;
   
   int decimaltobinary(int m)

   {    int arr[m];
         for(int k=1;k<=m;k++)
   {
       cin>>arr[k];
   }
   int p;    
   for(p=1;p<=m;p++) {
       
       
       int sum=0;
       int binaryNum[32];
       int i=0;
       while(arr[p]>0)
       {
           binaryNum[i]=arr[p]%2;
           arr[p]=arr[p]/2;
           i++;
       }
      for(int j=1;j<=i;j++)
      {
          cout<<binaryNum[j];
          //sum+=binaryNum[j]*pow(2,j);
      }
      //cout<<"\n"<<sum<<endl;

   }
   }





 int main()
 {

    // int n=17;
    decimaltobinary(5);
     return 0;
 }
