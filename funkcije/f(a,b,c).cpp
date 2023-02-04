#include<iostream>
#include<cstdio>
using namespace std;

float f(float a,float b,float c){
    return a*a*a+b*b+c;
}

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    cout<<f(a,b,c);
}