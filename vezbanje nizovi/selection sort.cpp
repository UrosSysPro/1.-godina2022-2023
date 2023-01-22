#include<iostream>

using namespace std;

int main(){
    int n;
    int niz[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>niz[i];
    }

    for(int i=0;i<n;i++){
        int min=niz[i];
        int lokacija=i;
        for(int j=i;j<n;j++){
            if(niz[j]<min){
                min=niz[j];
                lokacija=j;
            }
        }
        int p=niz[i];
        niz[i]=niz[lokacija];
        niz[lokacija]=p;
    }

    for(int k=0;k<n;k++){
        cout<<niz[k]<<" ";
    }
    cout<<"\n";
}