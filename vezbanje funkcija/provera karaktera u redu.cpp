#include<iostream>
using namespace std;

int jesteVelikoSlovo(char c){
    if(c>='A' and c<='Z'){
        return 1;
    }else{
        return 0;
    }
}

int jesteMaloSlovo(char c){
    if(c>='a' and c<='z'){
        return 1;
    }else{
        return 0;
    }
}
int jesteCifra(char c){
    if(c>='0' and c<='9'){
        return 1;
    }else{
        return 0;
    }
}
int jesteZnak(char c){
    if(jesteVelikoSlovo(c) or jesteMaloSlovo(c) or jesteCifra(c)){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    string red;
    getline(cin,red);
    int len=red.length();

    for(int i=0;i<len;i++){
        char c=red[i];
        if(jesteVelikoSlovo(c))
            cout<<c<<" je veliko slovo\n";
        if(jesteMaloSlovo(c))
            cout<<c<<" je malo slovo\n";
        if(jesteCifra(c))
            cout<<c<<" je cifra\n";
        if(jesteZnak(c))
            cout<<c<<" je znak\n";
    }
    cout<<"\n";
}