#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int v0,v1,s;
    cout<<"Unesite brzinu auta na pocetku puta(u km/h): ";
    cin>>v0;

    cout<<"Unesite brzinu auta na kraju puta(u km/h): ";
    cin>>v1;

    cout<<"Unesite duzinu puta(u km): ";
    cin>>s;

    int vsr=(v1+v0)/2;
    float t=s;
    t/=vsr;

    int h=t;
    
    int min=t*60;
    min%=60;
    
    int sekunde=t*3600;
    sekunde%=60;

    cout<<"Srednja brzina auta na celom putu je: "<<vsr<<"km/h\n";
    cout<<"put je trajao "<<h<<"h "<<min<<"min "<<sekunde<<"s";    
}