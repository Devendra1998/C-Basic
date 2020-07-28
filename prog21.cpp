#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    double x;
    cin>>x;
    double s=0, t=x;
    for(int k=1; k<n ;k++){
        s=s+t;
        t= -t*x*x/(2*(k))/(2*k-1);
        cout<<"No of terms "<< k <<" value: "<<s
            <<" Error estimate :" << t << endl;
    }
    cout<<endl<<"From library function :"<< cos(x) <<endl;
    return 0;
}