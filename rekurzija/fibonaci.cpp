#include<iostream>

using namespace std;

int fibonaciIterativno(int n){
    int a1=1;
    int a2=1;
    int a3;

    for(int i=2;i<n;i++){
        a3=a1+a2;    
        a1=a2;
        a2=a3;
    }
    return a3;
}

int f(int n){
    
    if(n<=1){
        return 1;
    }
    int resenje=f(n-1)+f(n-2);
    //cout<<resenje<<" ";
    return resenje;
}

int main(){
    cout<<fibonaciIterativno(42)<<"\n";
    cout<<f(41);
}