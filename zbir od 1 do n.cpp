#include<iostream>

using namespace std;

int main(){
    int zbir=0;
    int n;
    cin>>n;

    // int i=1;
    // while(i<=n){
    //     zbir+=i;
    //     i++;
    // }
    
    // for(int i=1;i<=n;i++){
    //     zbir+=i;
    // }

    zbir=n*(n+1)/2;

    cout<<zbir;
}