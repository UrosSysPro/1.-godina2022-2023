#include<iostream>
#include<fstream>
using namespace std;

struct Pravougaonik{
    int a,b;
};


int main(){
    ifstream in;
    in.open("pravougaonik.txt");

    int n;
    in>>n;
    Pravougaonik niz[10000];
    for(int i=0;i<n;i++){
        in>>niz[i].a>>niz[i].b;
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(niz[i].a*niz[i].b>niz[i+1].a*niz[i+1].b){
                Pravougaonik p=niz[i];
                niz[i]=niz[i+1];
                niz[i+1]=p;
            }
        }
    }
    

    for(int i=0;i<n;i++){
        cout<<niz[i].a*niz[i].b<<" "<<niz[i].a<<" "<<niz[i].b<<"\n";
    }

    in.close();
}