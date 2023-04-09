#include<iostream>

using namespace std;

int main(){

    int a,p,n;
    int Sn=0;

    cin>>a>>p>>n;

    int clan=a;
    for(int i=0;i<n;i++){
        Sn+=clan;
        clan*=p;
    }
    cout<<Sn;
}