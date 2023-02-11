#include<iostream>

using namespace std;


void ispisUMetrima(int put){
    int p=put%10;
    if(p==1){
        cout<<put<<" metar\n";
    }else if(p>=2 and p<=4){
        cout<<put<<" metra\n";
    }else{
        cout<<put<<" metara\n";
    }
}
void ispisUKoracima(int k){
    int p=k%10;
    if(p==1){
        cout<<k<<" korak\n";
    }else{
        cout<<k<<" koraka\n";
    }
}

int main(){
    cout<<"Unesite broj koraka i predjeni put:";
    int korak;
    int put;
    cin>>korak>>put;

    ispisUKoracima(korak);
    ispisUMetrima(put);
}