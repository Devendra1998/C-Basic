#include<iostream>
using namespace std;

// int sortedarray(int n, int arr){
// for(int i=n;i=1;i--){
//     if(arr[i]=arr[i-1]+1){
//         cout<<"Yes"<<endl;
//     }
//     else
//     {
//         cout<<"No"<<endl;
//     }
    
//     }
//     return 0;
// }

int main(){
    int n=5;
    int arr[n]={1,2,5,4,3};
    for(int i=n-1;i>=0;i--){
         
         if(arr[i]=arr[i-1]-1){
            cout<<"Yes"<<endl;
            return 0;
             
        }
        else
        {
          cout<<"No"<<endl; 
        }
        
        
    }
    
}