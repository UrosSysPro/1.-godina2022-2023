#include<iostream>

using namespace std;

int main(){
    int a[100],b[100],c[100],n,osnova;
    cout<<"Unesite broj cifara brojeva:";
    cin>>n;
    cout<<"Unesite osnovu brojeva:";
    cin>>osnova;
    cout<<"prvi broj:";
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        a[i]=c-'0';
    }
    cout<<"drugi broj:";
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        b[i]=c-'0';
    }
    int prenos=0;
    for(int i=n-1;i>=0;i--){
        c[i]=(prenos+a[i]+b[i])%osnova;
        prenos=(prenos+a[i]+b[i])/osnova;
    }

    for(int i=0;i<n;i++){
        cout<<c[i];
    }

}