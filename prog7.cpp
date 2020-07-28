// *************Call by value and reference*******************
#include<iostream>

using namespace std;

// void swap(int a,int b)This will not work becuse in call by value actual
// parameters being copied to the formal parameters
// call by reference method
// call by reference method using c++ reference Variable

   void swapReferencevar(int &a,int &b)
   {

    int temp = a;
        a= b;
        b= temp;
}
int main(){
    int x=4 ,y=5;

    cout<<"The values of x and y before swaping   "<<x<<"  And "<<y<<endl;
    // swap(a,b); This will not work
    // swappointer(&a,&b); This will  swap a and b using pointer variables
    // swapReferencevar(&a,&b); This will  swap a and b using reference variable
    swapReferencevar(x ,y);
    cout<<"The values of x and y after swaping:  " <<x<<"   And "<<y<<endl;
    return 0;
}