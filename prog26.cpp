#include<iostream>

using namespace std;

int main()
{
    for(int i=0;1<5;i++){
        cout<<"Make offer"<<endl;
        float p;
        cin>>p;
        if(p>500){
            cout<<"Accepted"<<endl;
            break;
        }
        float q=1000-p;
        cout<<"Will sell for"<<q<<endl;

    }




    return 0;
}