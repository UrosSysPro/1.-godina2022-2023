#include<iostream>

using namespace std;

void f(int n){
    if(n==0)return;
    f(n/10);
    cout<<n%10;
}

int main(){
    f(2023);
}