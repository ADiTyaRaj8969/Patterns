#include<iostream>
using namespace std;
void Pattern(int n){
    for (int i = 0 ; i< n;i++){
        for(int j = 0;j< n-i-1;j++){
            cout<<" ";
        }
        for (int j = 0;j< 2*i+1;j++){
            cout<<"*";
        }
    for(int j = 0;j< n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter Value:-";
    int n ;
    cin>>n;
    Pattern(n);
    return 0;
}