#include<iostream>
using namespace std;

int main(){
    int a[100],b[100],n,osnova=10,cinilac;
    cout<<"Unesite broj cifara brojeva:";
    cin>>n;
    cout<<"prvi broj:";
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        a[i]=c-'0';
    }
    cout<<"drugi broj:";
    cin>>cinilac;

    for(int j=0;j<cinilac;j++){
        int prenos=0;
        for(int i=n-1;i>=0;i--){
            int rez=prenos+a[i]+b[i];
            b[i]=rez%osnova;
            prenos=rez/osnova;
        }
    }
    

    for(int i=0;i<n;i++){
        cout<<b[i];
    }

}
//Ovo je recenica, ovo je komentar, nesto. Nesto drugo.