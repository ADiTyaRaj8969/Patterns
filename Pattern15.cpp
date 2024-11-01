#include<iostream>
using namespace std;
void Pattern(int n){
    for(int i = 0; i<= n; i++){
        char ch ='A'+ i ;
        for(int j = 0 ;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<" Enter Value ";
    int n ;
    cin>>n;
    Pattern(n);
    return 0;
}

/*
 Enter Value 4
A 
B B 
C C C 
D D D D 
E E E E E 

*/