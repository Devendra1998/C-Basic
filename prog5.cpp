
// **************************Structure,uniuon,enum ********************

#include<iostream>
using namespace std;

 typedef struct employee
{
   int id;
   char favchar;
   float salary;    
}ep;
union money
{
    int rice;
    char car;
    float pound;
};

int main()
{   enum Meal{Breakfast,lunch,dinner};
    Meal m1 =lunch;
    cout<<m1<<endl;
    // cout<<Breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    // union money m1;
    // m1.rice=35;
    // m1.car='d';
    // cout<<"money with car   "<<m1.car<<endl;
    
    
        
    // ep dev;
    // struct employee tanaya;
    // struct employee monu;
    // dev.id= 007;
    // dev.id= 007;
    // dev.id= 007;
    // dev.id= 007;
    // dev.favchar='c';
    // dev.salary=123456;

    // cout<<"Employee record    "<<dev.id<<endl;
    // cout<<"Employee record    "<<dev.favchar<<endl;
    // cout<<"Employee record    "<<dev.salary<<endl;
    return 0;
}