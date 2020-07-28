#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        unsigned int n,k,sum=0,arr[n];
        cin>>n;
        cin>>k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
        for(int j=0;j<n;j++)
        {
           sum+=arr[j];
        }
        cout<<(sum%k)<<endl;
        t--;
    }
    
    return 0;
}