#include<iostream>
using namespace std;
void Pattern(int n){
    for(int i = 0; i<=n;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter the Value:-";
    int n;
    cin>>n;
    Pattern(n);
    return 0;
}

/*

Enter the Value:-4
E 
D E 
C D E 
B C D E 
A B C D E 

*/