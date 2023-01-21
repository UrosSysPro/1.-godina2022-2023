#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int niz[100];
    niz[100]=2;

    //unos niza iz terminala
    for(int i=0;i<n;i++){
        cin>>niz[i];
    }

    //zbir svih clanova niza
    int zbir=0;
    for(int i=0;i<n;i++){
        zbir+=niz[i];
    }

    //najveci clan niza
    int max=niz[0];
    for(int i=0;i<n;i++){
        if(niz[i]>max){
            max=niz[i];
        }
    }
}