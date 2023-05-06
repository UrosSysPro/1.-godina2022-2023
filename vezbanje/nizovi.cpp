#include<iostream>

using namespace std;

int main(){
    string recenica;
    getline(cin,recenica);
    int n=recenica.length();

    int brojReci=0;
    for(int i=0;i<n-1;i++){
        if(recenica[i]!=' ')cout<<recenica[i];
        if(recenica[i]!=' ' and recenica[i+1]==' '){
            brojReci++;
            cout<<" ";
        }
    }
    if(recenica[n-1]!=' '){
        cout<<recenica[n-1];
        brojReci++;
    }
    cout<<"broj reci: "<<brojReci<<"\n";
}