#include<iostream>
using namespace std;
void Pattern(int n){
    for(int i = 1 ; i<=n; i++){
        for (int j=1;j<=i; j++){
            cout<<"*";
        }
        cout<< endl;
    }
}
int main(){
    int n ;
    cout<<"Enter Value:- ";
    cin>>n;
    Pattern(n);
    return 0;
}