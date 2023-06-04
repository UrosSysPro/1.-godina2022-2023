#include<iostream>

using namespace std;

int main(){
    char px;int py;
    cout<<"Unesite poziciju p: ";
    cin>>px>>py;

    char kx;int ky;
    cout<<"Unesite poziciju t: ";
    cin>>kx>>ky;

    int dx=abs(px-kx);
    int dy=abs(py-dy);

    if((dx==1 and dy==2) or (dx==2 and dy==1)){
        cout<<"moze\n";
    }else{
        cout<<"ne moze\n";
    }
}