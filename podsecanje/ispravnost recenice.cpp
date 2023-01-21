#include<iostream>

using namespace std;

int main(){
    string text;

    cout<<"Unesite text u jednom redu: \n";
    getline(cin,text);
    
    int brojGresaka=0;

    int n=text.length();

    char prvoSlovo=text[0];
    if(prvoSlovo<'A' or prvoSlovo>'Z'){
        cout<<"Ne pocinje velikim slovom\n";
        brojGresaka++;
    }

    char poslednjeSlovo=text[n-1];
    if(poslednjeSlovo!='.'){
        cout<<"Ne zavrsava se tackom\n";
        brojGresaka++;
    }

    cout<<"broj gresaka "<< brojGresaka<<"\n";
}