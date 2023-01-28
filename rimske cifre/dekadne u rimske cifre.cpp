#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int j=a%10/1;
    int d=a%100/10;
    int s=a%1000/100;
    int h=a%10000/1000;

    if(h==1)cout<<"M";
    if(h==2)cout<<"MM";
    if(h==3)cout<<"MMM";

    if(s==1)cout<<"C";
    if(s==2)cout<<"CC";
    if(s==3)cout<<"CCC";
    if(s==4)cout<<"CD";
    if(s==5)cout<<"D";
    if(s==6)cout<<"DC";
    if(s==7)cout<<"DCC";
    if(s==8)cout<<"DCCC";
    if(s==9)cout<<"CM";

    if(d==1)cout<<"X";
    if(d==2)cout<<"XX";
    if(d==3)cout<<"XXX";
    if(d==4)cout<<"XL";
    if(d==5)cout<<"L";
    if(d==6)cout<<"LX";
    if(d==7)cout<<"LXX";
    if(d==8)cout<<"LXXX";
    if(d==9)cout<<"XC";

    if(j==1)cout<<"I";
    if(j==2)cout<<"II";
    if(j==3)cout<<"III";
    if(j==4)cout<<"IV";
    if(j==5)cout<<"V";
    if(j==6)cout<<"VI";
    if(j==7)cout<<"VII";
    if(j==8)cout<<"VIII";
    if(j==9)cout<<"IX";
}