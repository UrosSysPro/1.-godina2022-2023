#include<iostream>

using namespace std;

int main(){
    char tabla[25];
    int n=5;
    for(int i=0;i<n*n;i++){
        tabla[i]=' ';
    }

    int igraJeGotova=0;
    char igrac='X';

    while (!igraJeGotova){
        cout<<"+";
        for(int i=0;i<n;i++){
            cout<<"---+";
        }
        cout<<"\n";
        for(int j=0;j<n;j++){
            cout<<"|";
            for(int i=0;i<n;i++){
                int index=i+n*j;
                if(tabla[index]==' ')
                    cout<<" "<<index+1<<" |";
                else
                    cout<<" "<<tabla[index]<<" |";
            }
            cout<<"\n";
            cout<<"+";
            for(int i=0;i<n;i++){
                cout<<"---+";
            }
            cout<<"\n";
        }
        cout<<"Sada igra "<<igrac<<"\n";
        cout<<"pozicija:";
        
        int index;
        cin>>index;
        index--;
        tabla[index]=igrac;

        if(igrac=='X')
            igrac='O';
        else 
            igrac='X';
    }
    
    
}