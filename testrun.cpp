#include<iostream>

using namespace std;

int sumarray( int a[])
 {
     int sum=0;
     for(int i=1;i<=10;i++)
     { sum=sum+a[i];}

    // cout<<sum;
     return sum;
 }
int main(){
    // int n=0;
    int arr[10];
    
    // cout<<"Enter the no of elements of array"<<endl;
    // cin>>n;
    cout<<"Enter the array element"<<endl;
    for(int i=1;i<=10;i++)
     cin>>arr[i];
    
    cout<<"The sum of all array element is: "<<sumarray(arr)<<endl;

    return 0;
}