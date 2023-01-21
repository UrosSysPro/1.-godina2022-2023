#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int zbir=0;

    for(int i=m;i<=n;i++){
        zbir+=i;
    }
    cout<<zbir;
}