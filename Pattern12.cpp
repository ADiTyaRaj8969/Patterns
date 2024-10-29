#include<iostream>
using namespace std;
void Pattern(int n){
    int num = 1;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<num<<" ";
            num += 1;
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

Enter Value:-5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/