#include<iostream>
#include<cmath>

using namespace std;

int main(){
    char px;int py;
    cout<<"Unesite poziciju p: ";
    cin>>px>>py;

    char lx;int ly;
    cout<<"Unesite poziciju t: ";
    cin>>lx>>ly;

    
    if(abs(lx-px)==abs(ly-py)){
        cout<<"moze\n";
    }else{
        cout<<"ne moze\n";
    }
}