#include<iostream>
using namespace std;
void Pattern(int n){
    for(int i = 1;i<=n;i++){
        for(int j = n;j>=i;j--){
            cout<<n-j+1<<" ";
       }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter Value:-";
    int n;
    cin>>n;
    Pattern(n);
    return 0;
}