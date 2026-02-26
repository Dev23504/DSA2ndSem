#include<iostream>
using namespace std;
int main(){
    int n=7;
    int m = (n+1)/2;
    //upper
    for(int i=1;i<=m;i++){
        if(i==1){
            for(int j=1;j<=n;j++){
                cout<<"* ";
            }
        }else{
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    //lower
for(int i=m-1;i>=1;i--){
        if(i==1){
            for(int j=1;j<=n;j++){
                cout<<"* ";
            }
        }else{
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }
            for(int j=1;j<=2*i-3;j++){
                cout<<"  ";
            }
            for(int j=1;j<=m-i+1;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}


// * * * * * * * 
// * * *   * * *
// * *       * *
// *           *
// * *       * *
// * * *   * * *
// * * * * * * *