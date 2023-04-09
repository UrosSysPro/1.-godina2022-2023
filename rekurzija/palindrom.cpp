#include<iostream>

using namespace std;

int f(string rec,int pocetak,int kraj){
    if(pocetak>=kraj)return 1;
    
    if(rec[pocetak]==rec[kraj]){
        return f(rec,pocetak+1,kraj-1);
    }else{
        return 0;
    }
}

int main(){
    string rec;
    cin>>rec;

    int jestePalindrom=f(rec,0,rec.length()-1);
    
    if(jestePalindrom){
        cout<<"jeste\n";
    }else{
        cout<<"nije\n";
    }
}