#include<bits/stdc++.h>
using namespace std;
 unsigned int dectobinary(int n ,unsigned int arr[])
 {
     for(int i=1;i<n;i++)
     {
         unsigned int sum=0;
         unsigned int binaryNum[32];
         
         unsigned int j=0;
         while(arr[i]>0){
          binaryNum[j]=arr[i]%2;
          arr[i]=arr[i]/2;
          j++;

         }


         for(unsigned int k=0;k<j;k++)
         {
             sum+=binaryNum[k]*pow(2,k);
         }

         cout<<sum<<endl;
     }
     return 0;
 }


int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    unsigned int arr[n];
    cin>>n;
    for(int p=0;p<n;p++)
    {
        cin>>arr[p];
    }
    
    int length=sizeof(arr)/sizeof(arr[0]);
    dectobinary(length,arr);
    }
 return 0;
}
