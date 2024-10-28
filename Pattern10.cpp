#include<iostream>
using namespace std;
void Pattern(int n){
    int start = 1;
    for(int i = 0;i<=n;i++){
        if(i%2==0)start =1;
        else start=0;
        for (int j = 0;j<=i;j++){
            cout<<start;
            start = 1-start;
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

/*

Enter Value:-4
1
01
101
0101
10101

 */