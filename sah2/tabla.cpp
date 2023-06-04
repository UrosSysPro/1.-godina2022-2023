#include<iostream>

using namespace std;


int main(){
    int size=3;
    int n=8;
    cout<<"+";
    for(int i=0;i<n*size;i++)cout<<"--";
    cout<<"+\n";
    for(int j=0;j<size*n;j++){
        cout<<"|";
        for(int i=0;i<size*n;i++){
            int x=i/size;
            int y=j/size;
            if(x%2==y%2)
                cout<<" #";
            else
                cout<<"  ";
        }
        cout<<"|";
        cout<<"\n";
    }
    cout<<"+";
    for(int i=0;i<n*size;i++)cout<<"--";
    cout<<"+\n";
}