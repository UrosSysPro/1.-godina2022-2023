#include<iostream>
#include<cmath>
using namespace std;

float f(float a,float b,float c){
    return a*a*a+b*b+c;
}

int main(){
    float a;
    cin>>a;
    cout<<sqrt(a);
}