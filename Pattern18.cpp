#include<iostream>
using namespace std;
void Pattern(int n){
    int s = 0;
    for(int i = 0; i<n;i++){
        for(int j = 1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j = 0;j<s;j++){
            cout<<" ";
        }
        for(int j = 1;j<=n-i;j++){
            cout<<"*";
        }
        s += 2;
        cout<<endl;
    }
     s=8;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        for(int j = 0;j<s;j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        s -= 2;
        cout<<endl;
    
}
}
int main(){
    cout<<"Enter the Value:-";
    int n;
    cin>>n;
    Pattern(n);
    return 0;
}

/*

Enter the Value:-5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/