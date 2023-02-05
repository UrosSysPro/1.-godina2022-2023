#include<iostream>

using namespace std;

void convertTemperature(){
    float celsius;
    cout<<"Unesite temperaturu u stepenima C:";
    cin>>celsius;
    float fahrenheit=celsius*9/5+32;
    cout<<celsius<<"C -> "<<fahrenheit<<"F\n";
}
void convertLength(){
    cout<<"Unesite duzinu u metrima: ";
    float meter;
    cin>>meter;
    float foot = meter*3.281;
    cout<<meter<<"m -> "<<foot<<"ft\n";
}
void convertMass(){
    cout<<"comming soon tm\n";
}

int main(){
    while(2+2==4){
        cout<<"Unesite broj opcije:\n";
        cout<<"1. Prebacivanje iz stepena C u F\n";
        cout<<"2. Prebacivanje iz m u ft\n";
        cout<<"3. Prebacivanje iz kg u p\n";
        int opcija;
        cin>>opcija;
        if(opcija==1)convertTemperature();
        if(opcija==2)convertLength();
        if(opcija==3)convertMass();
    }
}