#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // char rec[100];
    
    // for(int i=0;i<n;i++){
    //     cin>>rec[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<rec[i];
    // }
    string s;
    cin>>s;
    int len=s.length();
    int brojVelikihSlova=0;
    for(int i=0;i<len;i++){
        char c=s[i];
        if(c>='A' and c<='Z'){
            brojVelikihSlova++;
        }
    }
    cout<<brojVelikihSlova;
}
