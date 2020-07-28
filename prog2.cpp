#include<iostream>
#include<stdlib.h>
using namespace std;

void amount(int princ,int time ,float rate)
{
    cout<<"the pricipal amount "<<princ <<endl;
    cout<<"entered time"<<time <<endl;
    cout<<" entred rate"<<rate <<endl;
    cout<<"amount"<<(princ*time*rate)<<endl;
}


void amount(int princ ,int time)
{
    cout<<"entered principal"<<princ <<endl;
    cout<<"entered time"<<time << endl;
    cout<<"amount"<<(princ*time*0.08)<<endl;
} 


void amount(int princ,float rate)
{
    cout<<"enterd principal"<< princ <<endl;
    cout<<"enterd rate"<<rate <<endl;
    cout<<"amount"<<(princ*rate*2) <<endl;
}


void amount(int time,float rate)
{
    cout<<"entered time"<<time <<endl;
    cout<<"entered rate"<<rate<<endl;
    cout<<"Amount"<<(time*rate*3000)<<endl;
}

int main()
{   system("cls");
    amount(3000,2,0.08);
    // amount(3000,2);
    // amount(3000,0.08F);
    
}