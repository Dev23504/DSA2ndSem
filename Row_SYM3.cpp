#include <iostream>
using namespace std;

int main() {
    int n;
    int m=(n+1)/2;
    cin>>n;
    for (int i=1; i <=m; i++) {
        cout<<"\n";
        // space
        for (int j=1; j<=m-i; j++){
        cout << "  ";
        }
        for (int j=1; j<=2*i-1; j++){
        if (j%2!=0)
        {
           cout << "* ";
        }
        else
        cout << "  ";
        }
    }
    cout << endl; 
    for (int i=1; i >=n; i--) {
        cout<<"\n";
        // space
        for (int j=1; j<=i; j++){
        cout << "  ";
        }
        for (int j=1; j<=2*i-1; j++){
        if (j%2!=0)
        {
           cout << "* ";
        }
        else
        cout << "  ";
        }
    }
    cout << endl; 
    return 0;
}
