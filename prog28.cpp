#include<iostream>

using namespace std;

int main(){
    int remainder=0;
    for(int i=0;i<15;i++){
        char x;
        cin>>x;
        int digitread=x-'0';
        int dividend = (remainder)*10 + digitread;
        cout<<dividend/2;
        remainder = dividend % 2;

    }
    return 0;
}
