#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(NULL));
    long long start=time(NULL);
    int poeni=0;
    while(poeni<10){
        int a=rand()%100;
        int b=rand()%100;
        cout<<a<<"+"<<b<<"=";
        int odgovor;
        cin>>odgovor;
        if(odgovor==a+b){
            poeni++;
            cout<<"Tacno "<<time(NULL)-start<<"\n";
        }else{
            cout<<"Netacno "<<time(NULL)-start<<"\n";

        }
    }
    cout<<"vreme "<<time(NULL)-start<<"\n";

}