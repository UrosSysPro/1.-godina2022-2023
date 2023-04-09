#include<iostream>
#include<fstream>

using namespace std;

void sort(string inFileName,string outFileName){
    ofstream out;
    ifstream in;
    out.open(outFileName);
    in.open(inFileName);
    //procitati iz fajla
    int n;
    int niz[100000];
    in>>n;
    for(int i=0;i<n;i++){
        in>>niz[i];
    }
    //sortirati
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(niz[j]>niz[j+1]){
                int p=niz[j];
                niz[j]=niz[j+1];
                niz[j+1]=p;
            }
        }
    }
    //upisivanje

    out<<n<<"\n";
    for(int i=0;i<n;i++){
        out<<niz[i]<<"\n";
    }


    out.close();
    in.close();    
}


int main(){

    cout<<"############################\n";
    cout<<"# Sortiranje niza iz Fajla #\n";
    cout<<"############################\n";

    string inFileName,outFileName;

    cout<<"Unesite ime fajla sa nizom: ";
    cin>>inFileName;
    cout<<"Unesite ime fajla gde ce biti sortiran niz: ";
    cin>>outFileName;
    sort(inFileName,outFileName);
}