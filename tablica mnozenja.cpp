#include<iostream>

using namespace std;

int main(){
    int n=10;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            int rez=i*j;
            if(rez<10)
                cout<<"  "<<rez;
            else
                cout<<" "<<rez;
        }
        cout<<"\n";
    }
}