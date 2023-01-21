#include<iostream>
using namespace std;

int main(){
    int n=50;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            char c=' ';
            cout<<"\e[40m";
            if(i+j<=n-1 and i+j>=(n-1)/2 and i+n/4>j)
                cout<<"\e[44m";
            if(i+j>=(n-1)*5/4 and j>n/2 and i+n/4>j and !(i+j>(n-1)*3/2 and i>j))
                cout<<"\e[44m";
            cout<<" "<<c;
        }
        cout<<"\n";
    }
}