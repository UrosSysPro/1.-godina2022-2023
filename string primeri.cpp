#include<iostream>
using namespace std;
int main(){
    string rec;
    int duzinaReci;

    cin>>rec;
    duzinaReci=rec.length();

    for(int i=duzinaReci-1;i>=0;i--){
        cout<<rec[i];
    }
}