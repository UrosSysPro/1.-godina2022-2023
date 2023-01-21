#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;

    for(int j=0;j<a;j++){
        for(int i=0;i<a;i++){
            if(i==0 or j==0 or i==a-1 or j==a-1)
                cout<<" *";
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
}