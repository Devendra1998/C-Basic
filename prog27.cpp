#include<iostream>

using namespace std;
 int main(){
   float capacity=30,current=0;
    while(true){
       cout<<"Currently we have "<<current<<endl;
   char command;
   cin >> command;
   if(command=='x')break;
   else if (command == '+'){
       float qty;
       cin>>qty;
       current=current+qty;
       if(current>capacity){
           cout<<"wasted"<<(current-capacity)<<endl;
           current=capacity;
       }
   }

   else if (command == '-')
   {
    float qty;
    cin>>qty;
    if(qty>current)
    {
        cout<<"Giving:"<<current<<endl;
        current=0;
    }
    else
    {
    cout<<"Giving"<<qty<<endl;
    current=current-qty;
    }
    
   }
   else
   {
    cout<<"Invalid command"<<endl;
   }
   
   
  }
    return 0;
 }