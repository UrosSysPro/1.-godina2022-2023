#include<iostream>

using namespace std;

int main(){
    int n;
    int niz[100];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>niz[i];
    }


    float brojParnih=0,brojNeparnih=0;
    for(int i=0;i<n;i++){
        if(niz[i]%2==0){
            brojParnih++;
        }else{
            brojNeparnih++;
        }
    }
    
    brojParnih=brojParnih*100/n;
    brojNeparnih=brojNeparnih*100/n;
    cout<<"parnih: "<<brojParnih<<"%\n";
    cout<<"neparnih: "<<brojNeparnih<<"%\n";
}