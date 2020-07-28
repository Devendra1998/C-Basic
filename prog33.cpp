                            //   Mario and Pauline

#include<iostream>
using namespace std;

bool ispossible(int x1, int y1, int x2, int y2)
{   bool True;
    bool False;
    if(x1+y1==x2){
        x1=x1+y1;
    }
    if(y1+x1==y2){
        y1=y1+x1;
    }
    if((x1==x2)&&(y1==y2)){
        return True;
    }
    else
    {
      return False;
    }
    
}

// Driver Code
int main(){
    int x1,y1,x2,y2;
    bool result = ispossible(3,2,5,7);
    cout<<result<<endl;
}