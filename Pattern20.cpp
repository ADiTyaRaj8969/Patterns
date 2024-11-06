#include<iostream>
using namespace std;
void Pattern(int n){
    for(int i = 0; i< n;i++){
        for(int j = 0; j< n; j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        Pattern(n);
    }
}

/*
Entered length 4
Entered breadth 4
****
*  *
*  *
****
*/