#include<iostream>

using namespace std;

int main(){
    char unos=' ';
    int levo=0,desno=1000;
    while(unos!='t'){
        int trenutno=(levo+desno)/2;
        cout<<"da li je tvoj broj "<<trenutno<<"?\n";
        cout<<"odgovor: ";
        cin>>unos;
        if(unos=='v'){
            levo=trenutno;
        }
        if(unos=='m'){
            desno=trenutno;
        }
    }
    cout<<"tvoj broj je: "<<(levo+desno)/2;
}