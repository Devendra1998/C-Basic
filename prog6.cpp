//  **************Functions and Functions Prototype *********************************

#include <iostream>
using namespace std;

// Function Prototype
// type function-name(argument);

// int sum(int a,int b); -----Acceptable
// int sum(int a, b); //-----NOt Acceptable
// int sum(int ,int ); 


int main(){
   int num1,num2;
   cout<<"Enter first number "<<endl;
   cin>>num1;
   cout<<"Enter second number"<<endl;
   cin>>num2;
   cout<<"The sum of two numbers "<<sum(num1,num2)<<endl;
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;

}