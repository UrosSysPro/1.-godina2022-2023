#include<iostream>

using namespace std;

int main(){
    char px;int py;
    cout<<"Unesite poziciju p: ";
    cin>>px>>py;

    char tx;int ty;
    cout<<"Unesite poziciju t: ";
    cin>>tx>>ty;

    if(px==tx or py==ty){
        cout<<"moze\n";
    }else{
        cout<<"ne moze\n";
    }
}