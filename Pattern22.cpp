#include<iostream>
using namespace std;
int Pattern(int n,int start){
    for (int i = 0; i<=n;i++){
    for(int j=0;j<= i;j--){
        cout<<start--<<" ";
    }
    cout<<endl;
    }
}
int main(){
Pattern(5,15);
return 0;
}

/*
15
7 14
6 8 13 
2 5 9 12
1 3 4 10 11
*/