#include<iostream>
using namespace std;

int main(){
    int n;
    int niz[100];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>niz[i];
    }

    int min=100000;
    int max=0;
    for(int i=0;i<n;i++){
        if(niz[i]<min){
            min=niz[i];
        }
        if(niz[i]>max){
            max=niz[i];
        }
    }
    cout<<"najmanji clan niza je: "<<min<<"\n";
    cout<<"najveci clan niza je: "<<max<<"\n";
}