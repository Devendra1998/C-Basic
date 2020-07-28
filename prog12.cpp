#include<iostream>

using namespace std;

int main(){
    int t;
    cout<<"Enter t"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter n"<<endl;
        cin>>n;
        char str[n][10];
        for(int i=0;i<n;i++){

            for(int j=1;j<11;j++){

                cin>>str[i][j];
            }
        }
        char characteraray[1][11];
        for(int x=0;x<1;x++){

            for(int y=1;y<11;y++){

                characteraray[x][y]=str[x][y];
            }
        }

        for(int k=0;k<n-1;k++){

            for(int l=1;l<11;l++){
                if(characteraray[k][l]=='1' && str[k][l]=='1'){
                    characteraray[k][l]='0';
                }

                else if (characteraray[k][l]=='0' && str[k][l]=='1')
                {
                    characteraray[k][l]='1';
                }
                
            }
        }
        int count=0;
        for(int m=0;m<1;m++){
            for(int p=1;p<11;p++){
                if(characteraray[m][p]=='1'){
                    count++;
                }

            }
       }
       
    }

    return 0;

}
