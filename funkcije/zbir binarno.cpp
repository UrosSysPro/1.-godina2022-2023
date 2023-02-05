#include<iostream>

using namespace std;

void printBinary(int a){
    cout<<"0100";
}

int main(){
    int a,b,c;
    cin>>a>>b;

    c=a+b;
    cout<<" ";
    printBinary(a);
    cout<<"\n";
    cout<<"+";
    printBinary(b);
    cout<<"\n";
    cout<<"-------\n ";
    printBinary(c);
    cout<<"\n";
}