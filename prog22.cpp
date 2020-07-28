#include<iostream>
#include<math.h>

using namespace std;

int main()
{    
    int x;
    cin>>x;
    double p,q;
    cin>>p>>q;
    int n;
    cin>>n;
    double w = (p-q)/n;
    double area = 0;
    for (int i = 0; i < n; i++)
    {
        area = area + w*1/(p+i*w);
    }
    
    cout<<area<<endl;
    cout<<log(x)<<endl;
    return 0;
}