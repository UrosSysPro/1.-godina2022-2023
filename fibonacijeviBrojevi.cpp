#include<iostream>

using namespace std;

int main(){
    long long n,i,f1=0,f2=1,f3;
    cin>>n;

    for(i=1;i<n;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    double zlatniPresek=f2;
    zlatniPresek/=f1;

    cout<<"fibonacijev broj:"<<f3<<"\n";
    cout<<"zlatni presek:"<<zlatniPresek<<"\n";
}