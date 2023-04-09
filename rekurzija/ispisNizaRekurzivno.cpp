#include<iostream>

using namespace std;

void ispisUNapredIterativno(int niz[9]){
    int n=9;
    for(int i=0;i<n;i++){
        cout<<niz[i]<<" ";
    }
    cout<<"\n";
}
void ispisUNazadIterativno(int niz[9]){
    int n=9;
    for(int i=n-1;i>=0;i--){
        cout<<niz[i]<<" ";
    }
    cout<<"\n";
}

void ispisUNapredRekurzivno(int niz[9],int i){
    if(i>8)return;
    cout<<niz[i]<<" ";
    ispisUNapredRekurzivno(niz,i+1);
}

int main(){
    int niz[]{1,2,3,4,5,5,5,6,7};
    
    ispisUNapredRekurzivno(niz,0);

}