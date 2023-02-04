#include<iostream>

using namespace std;

int stepen(int a,int n){
    int resenje=1;
    for(int i=0;i<n;i++){
        resenje*=a;
    }
    return resenje;
}

int main(){
    int a,n;
    cin>>a>>n;
    
    cout<<stepen(a,n);
}