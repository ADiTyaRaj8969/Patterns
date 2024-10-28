#include<iostream>
using namespace std;
void Pattern(int n){
    int space = 2*n-2;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++ ){
            cout<<j;
        }
        for(int j = 1;j<=space;j++){
            cout<<" ";
        }
        for(int j =i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
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
1      1
12    21
123  321
12344321
*/