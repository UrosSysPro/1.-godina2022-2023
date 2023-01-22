#include<iostream>

using namespace std;

int main(){
    int n;
    int niz[100];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>niz[i];
    }


    int prosek=0;
    for(int i=0;i<n;i++){
        prosek+=niz[i];
    }
    prosek/=n;
    cout<<"prosek svih clanova niza je: "<<prosek<<"\n";
}