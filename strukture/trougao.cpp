#include<iostream>
#include<cmath>

using namespace std;

struct Trougao{
    float a,b,c,O,P;
};

Trougao novi_trougao(){
    Trougao t;

    cin>>t.a>>t.b>>t.c;
    t.O=t.a+t.b+t.c;
    float s=t.O/2;
    t.P=sqrt(s*(s-t.a)*(s-t.b)*(s-t.c));
    
    return t;
}

void ispisi_trougao(Trougao t){
    cout<<"a: "<<t.a<<"\n";
    cout<<"b: "<<t.b<<"\n";
    cout<<"c: "<<t.c<<"\n";
    cout<<"O: "<<t.O<<"\n";
    cout<<"P: "<<t.P<<"\n";
}

int main(){
    Trougao t=novi_trougao();   
    
    ispisi_trougao(t);
    return 0;
}
