#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
            int x;
            int y;

            A(int i,int j)
            {
                x=i;
                y=j;
            }

            void show()
            {
                cout<<"diplay of both integer  "<<x <<" and  "<<y<<endl;
            }
};

int main()
{
    class A a(5 , 8);
    a.show();
    return 0;
}