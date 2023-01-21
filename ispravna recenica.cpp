#include<iostream>
using namespace std;

int main(){
    string red;

    getline(cin,red);
    int len=red.length();

    //proverava da li recenica pocinje sa velikim slovom
    char prvoSlovo=red[0];
    if(!(prvoSlovo>='A' and prvoSlovo<='Z')){
        cout<<"greska: ne pocinje velikim slovom\n";
    }
    //proveravamo za duplikate razmaka
    for(int i=0;i<len-1;i++){
        if(red[i]==' ' and red[i+1]==' '){
            cout<<"greska: na "<<i<<" se nalaze dva uzastopna razmaka\n";
        }
    }
    //proveravamo da li se zavrsava tackom
    if(red[len-1]!='.'){
        cout<<"greska: fali . na kraju recenice\n";
    }

}