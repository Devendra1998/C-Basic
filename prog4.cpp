#include<iostream>

using namespace std;

int main()
{   //Arrays and pointer arithmatic
    int marks[4]={80,83,85,88};
    int mathmarks[4];
    mathmarks[0]=78;
    mathmarks[1]=77;
    mathmarks[2]=76;
    mathmarks[3]=80;
    cout<<"these are math marks:"<<endl;
    cout << mathmarks[0] <<endl;  
    cout << mathmarks[1] <<endl;
    cout << mathmarks[2] <<endl;
    cout << mathmarks[3] <<endl;
    cout<<"these are simple mark:"<<endl;
    cout << marks[0] <<endl;  
    cout << marks[1] <<endl;
    //You can change arrays.
    marks[2]=90;
    cout << marks[2] <<endl;
    cout << marks[3] <<endl; 
    
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout<<"The value of marks"<<i<<"is"<<marks[i]<<endl;
    // }
    
    // int i;
    // while ( i<4)
    // {
    //     /* code */
    //      cout<<"The value of marks \t "<<i<<" \t is   "<<marks[i]<<endl;
    //      i++;
    // }
    // int i;
    // do
    // {
    //     /* code */
    //     cout<<"The value of marks \t "<<i<<" \t is   "<<marks[i]<<endl;
    //      i++;
    // } while (i<4);
    
    // pointers and arrays
    int* p=marks;
    cout<<"The value of marks[0] is "<<*p<< endl;
    cout<<"The value of marks[1] is "<<*(p+1)<< endl;
    cout<<"The value of marks[2] is "<<*(p+2)<< endl;
    cout<<"The value of marks[3] is "<<*(p+3)<< endl;



                                               
    return 0;  
}