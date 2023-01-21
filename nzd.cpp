#include<iostream>
using namespace std;

int main(){
    int a,b,nzd=1;

    cin>>a>>b;
    
    int delilac=2;
    while(a>delilac and b>delilac){    
        while(a%delilac==0 and b%delilac==0){
            a/=delilac;
            b/=delilac;
            nzd*=delilac;
        }
        delilac++;
    }
    cout<<nzd;
}