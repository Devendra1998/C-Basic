#include<bits/stdc++.h>
using namespace std;

class complex
{
    private:int real;
            int image;

    public:
            complex(int i,int j)

            {
                real=i;
                image=j;
            } 

            complex operator +(complex &c2)
            {
                 complex  temp ;
                 temp.real =real +c2.image;
                 temp.image = c2.image;
                 return temp;
            } 

            void show_detail()
            {
                cout<<real<<"i"<<image;            
            }      
};

int main()
{
    complex c1(5,4);
    complex c2(3,1);
    complex c3 = c1+c2;
    c3.show_details();
    return 0;
}