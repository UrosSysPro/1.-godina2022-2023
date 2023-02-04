#include<iostream>
#include<cmath>

using namespace std;

int nzd(int a,int b){
    int i=2;
    int nzd=1;

    while(a>=i and b>=i){
        while(a%i==0 and b%i==0){
            a/=i;
            b/=i;
            nzd*=i;
        }
        i++;
    }
    return nzd;
}
int saberi(int a,int b){
    return a+b;
}

int main(){
    float a;
    cin>>a;
    float koren=sqrt(a);
    cout<<koren;
}