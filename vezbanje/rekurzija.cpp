#include<iostream>

using namespace std;

//5
//1 2 3 4 5 
//5 4 3 2 1

void ispis(int n){
    if(n==0)return;


    int a;
    cin>>a;
    ispis(n-1);
    cout<<a<<" ";
}

int main(){
    int n;
    cin>>n;
    ispis(n);
}