#include<iostream>

using namespace std;

void zameni(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}

int main(){

    
    int a,b;
    
    

    cin>>a>>b;

    // int p;
    // p=b;
    // b=a;
    // a=p;

    // a=a+b;
    // b=a-b;
    // a=a-b;

    zameni(a,b);
    cout<<a<<" "<<b;
}