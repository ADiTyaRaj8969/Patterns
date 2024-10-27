#include<iostream>
using namespace std;
void Pattern(int n){
    for (int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<< j <<"";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter Value :-";
    int n;
    cin>>n;
    Pattern(n);
    return 0;
}
