// ********************Inline Functions,Default Arguments & Constant Arguments***
#include<iostream>

using namespace std;

int product(int a ,int b){
    return a*b;
}

float moneyrecieved(int currentmoney, float factor=1.04){
    return currentmoney*factor;
    
}


int main(){
    int a=5,b=6;
    // cout<<"The Product of two numbers is  "<<product(a,b)<<endl;
    int money=100000;
    cout<<"Your current money is"<<money<<"and your money after one year"<<moneyrecieved(money)<<endl;
    cout<<" For VIP Your current money is"<<money<<"and your money after one year"<<moneyrecieved(money,1.1)<<endl;
    return 0;
}