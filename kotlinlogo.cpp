#include<iostream>
using namespace std;

int main(){
    int n=40;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c=' ';
            cout<<"\e[40m";
            if(i>=j)
                // c='\\';
                cout<<"\e[44m";
            
            if(i+j<=n-1)
                // c='/';
                cout<<"\e[41m";
            
            if(i+j<=(n-1)/2)
                // c='\\';
                cout<<"\e[44m";
            
            cout<<" "<<c;
        }
        cout<<"\n";
    }
}