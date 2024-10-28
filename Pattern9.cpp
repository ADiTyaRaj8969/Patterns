#include <iostream>
using namespace std;
void Pattern(int n){
    for (int i =1 ;  i<= 2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter Value";
    int n;
    cin>>n;
    Pattern(n);
    return 0;
}

/*


Enter Value5
*
**
***
****
*****
****
***
**
*


*/