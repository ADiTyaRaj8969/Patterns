#include<iostream>
using namespace std;
void Pattern(int n){
    for(int i = 0; i<= n; i++){
        for(char ch = 'A';ch<='A'+(n-i-1);ch++){
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
 Enter Value 5
A B C D E 
A B C D 
A B C 
A B 
A 
*/