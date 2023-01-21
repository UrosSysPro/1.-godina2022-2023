#include<iostream>

using namespace std;

int main(){
    char c;
    cout<<"Unesite jedan karakter: ";
    cin>>c;

    if(c>='A' and c<='Z'){
        cout<<c<<" je veliko slovo\n";
    }else{
        cout<<c<<" nije veliko slovo\n";
    }
}