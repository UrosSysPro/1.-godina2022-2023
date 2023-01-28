#include<iostream>
#include<cmath>

using namespace std;


int main(){

    char c;

    cout<<"Unesite poziciju kraljice (x,y):";
    int kraljicaX,kraljicaY;
    cin>>c>>kraljicaY;
    kraljicaX=c-'a'+1;

    cout<<"Unesite poziciju konja (x,y):";
    int konjX,konjY;
    cin>>c>>konjY;
    konjX=c-'a'+1;

    int rx=abs(konjX-kraljicaX);
    int ry=abs(konjY-kraljicaY);

    if((rx==1 and ry==2) or (rx==2 and ry==1)){
        cout<<"konj moze da pojede kraljicu\n";
    }else{
        cout<<"konj ne moze da pojede kraljicu\n";
    }

    if(rx==0 or ry==0 or rx==ry){
        cout<<"krajlica moze da pojede konja\n";
    }else{
        cout<<"krajlica ne moze da pojede konja\n";
    }
    
}