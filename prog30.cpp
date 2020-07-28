#include<iostream>
using namespace std;

void getDecision(int a, int b){
    while (a!=b)
    {
        if(a>b){
            cout<<"Eat"<<endl;
            a--;
        }

        if(a<b){
            while(2*a<b){
                cout<<"Overflow"<<endl;
                a=2*a;
            }

            
            {
               cout<<"Eat"<<endl;
               a--;
            }
            
        }
        
    }
    
}

int main(){
    int a;
    int b;
    getDecision(1,9);
    return 0;
}