#include<iostream>
#include<fstream>

using namespace std;

struct Ucenik{
    string ime,prezime,skola;
    int dan,mesec,godina;
};

Ucenik ucitaj(ifstream& in){
    Ucenik u;
    in>>u.ime;
    in>>u.prezime;
    in>>u.dan;
    in>>u.mesec;
    in>>u.godina;
    in>>u.skola;
    return u;
}

void ispis(Ucenik u){
    cout<<u.ime<<" ";
    cout<<u.prezime<<" ";
    cout<<u.dan<<"/"<<u.mesec<<"/"<<u.godina<<" ";
    cout<<u.skola<<"\n";
}

void ispisUFajl(ofstream& out,Ucenik u){
    out<<"start\n";
    out<<"ime:"<<u.ime<<"\n";
    out<<"prezime:"<<u.prezime<<"\n";
    out<<"datum:"<<u.dan<<"/"<<u.mesec<<"/"<<u.godina<<"\n";
    out<<"skola:"<<u.skola<<"\n";
    out<<"end\n\n";
}

int main(){
    ifstream in;
    in.open("unos.txt");

    string s;
    getline(in,s);

    int n;
    in>>n;
     
    Ucenik ucenici[1000];

    for(int i=0;i<n;i++){
        ucenici[i]=ucitaj(in);
    }
    in.close();

    ofstream out;
    out.open("izlaz.txt");

    for(int i=0;i<n;i++){
        ispisUFajl(out,ucenici[i]);
    }
    
    out.close();
}