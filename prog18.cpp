#include<iostream>


using namespace std;

int main(){
    int arr[10];
    for(int i=0;i<10;i++)
    {
     cin>>arr[i];
    }
    for(int i=2;i<10;i++)
    {
        int a=arr[i-2];
        int b=arr[i-1];
        int c=arr[i];if(a==b && b==c)
        { cout<<"1"<<endl;
          return 0;
        }}
        
        cout<<"0";
    
}