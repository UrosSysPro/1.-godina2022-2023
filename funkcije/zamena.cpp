#include<iostream>

using namespace std;

void zameni(int a,int b){
    int p=a;
    a=b;
    b=p;
}

int main(){
    int a,b;
    cin>>a>>b;
    zameni(b,a);
    cout<<a<<" "<<b;
}