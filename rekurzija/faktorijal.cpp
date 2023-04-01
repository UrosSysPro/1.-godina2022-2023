#include<iostream>

using namespace std;

int faktorijalIterativno(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}

int f(int n){
    if(n==0)return 1;
    return n*f(n-1);
}

int main(){
    int  n=50;
    cout<<faktorijalIterativno(n)<<"\n";
    cout<<f(n)<<"\n";
}