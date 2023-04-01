#include<iostream>

using namespace std;

long long stepen(long long x,int n){
    if(n==0)return 1;
    return x*stepen(x,n-1);
}
long long stepenIterativno(long long x,int n){
    long long rezultat=1;
    for(int i=0;i<n;i++){
        rezultat*=x;
    }
    return rezultat;
}

long long stepen2(long long x,int n){
    if(n==0)return 1;
    if(n%2==0){
        long long rez=stepen2(x,n/2);
        return rez*rez;
    }else{
        long long rez=stepen2(x,n/2);
        return x*rez*rez;
    }
}
long long stepen3(long long x,int n){
    if(n==0)return 1;
    if(n%2==0){
        return stepen3(x,n/2)*stepen3(x,n/2);
    }else{
        return x*stepen3(x,n/2)*stepen3(x,n/2);
    }
}

int main(){
    cout<<stepen2(2,50)<<"\n";
    
    cout<<stepen3(2,50)<<"\n";
}