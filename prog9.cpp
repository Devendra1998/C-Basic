// ****************************Function Overloading**********************
#include<iostream>

using namespace std;

int sum(int a, int b){
    cout<<"Using function two arguments"<<endl;
    return a+b;
}

int sum(int a, int b,int c){
    cout<<"Using function with three arguments"<<endl;
   return a+b+c;

}
int volume(int a)
{   cout<<"Volume of cube  ";
    return (a*a*a);
}

int volume(int a, int b ,int c){
    cout<<"THe volume of cuboid  ";
    return (a*b*c);
}

int volume(int a ,int b){
    cout<<"The volume of cylinder  ";
    return (3.14*a*a*b);
}


int main(){
    
    cout<<"The Sum of the numbers 4 and 8 is :"<<sum(4,8)<<endl;
    cout<<"The Sum of the numbers 4 and 8 and 7 is :"<<sum(4,7,8)<<endl;
    cout<<volume(4,7,8) <<" "<<endl;
    cout<<volume(4)<<" "<<endl;
    cout<<volume(7,8)<<" "<<endl;

    return 0;
}