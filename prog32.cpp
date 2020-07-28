#include<iostream>
#include<climits>

using namespace std;

int max_Sum_Array(int a[],int size){
    int max_sum=0;
    int Sum_ending_here=0;
    for (int i = 0; i < size; i++)
    {
        Sum_ending_here=Sum_ending_here+a[i];
       
        if(max_sum<Sum_ending_here){
            max_sum=Sum_ending_here;
        }
         if (Sum_ending_here<0)
        {
            Sum_ending_here=0;
        }
    }
    return max_sum;
}

int main(){
int a[]={2,-3,1,-1,5,-3,6,-4};
int n = sizeof(a)/sizeof(a[0]);
int sum=max_Sum_Array(a,n);
cout<<"Max sum of continuous subarray  "<<(sum) << endl;
}