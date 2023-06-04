#include<iostream>

using namespace std;


int main(){
    int a,b,max;
    cin>> a>>b;

    // if(a>b)
    //     max=a;
    // else
    //     max=b;
    int u=a>b;
    max=a*u+b*!u;

    cout<<max;
}




/*
    registri
    cache
    ram
    hard disk

*/