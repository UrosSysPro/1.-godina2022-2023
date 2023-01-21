#include<iostream>

using namespace std;

int main(){
    string rec;
    int duzinaReci;

    cin>>rec;
    duzinaReci=rec.length();

    //neki kod
    for(int i=0;i<duzinaReci/2;i++){
        int pocetak=i;
        int kraj=duzinaReci-1-i;
        cout<<rec[pocetak]<<rec[kraj];
    }
    if(duzinaReci%2==1){
        cout<<rec[duzinaReci/2];
    }

}