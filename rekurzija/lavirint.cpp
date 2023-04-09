#include<iostream>
#include<fstream>

using namespace std;

void unos(ifstream &in,int niz[100][100],int sirina,int visina){
    for(int j=0;j<visina;j++){
        for(int i=0;i<sirina;i++){
            in>>niz[i][j];
        }
    }
}
void ispis(int niz[100][100],int sirina,int visina){
    for(int j=0;j<visina;j++){
        for(int i=0;i<sirina;i++){
            if(niz[i][j]==-2)
                cout<<" #";
            else if(niz[i][j]==-1)
                cout<<"  ";
            else if(niz[i][j]<10)
                cout<<" "<<niz[i][j];
            else 
                cout<<niz[i][j];
            cout<<" ";
        }
        cout<<"\n";
    }
}

void pretraziLavirint(int niz[100][100],int sirina,int visina,int x,int y,int korak){
    if(x<0 or y<0 or x>=sirina or y>=visina)return;
    if(niz[x][y]==-2)return;
    if(niz[x][y]!=-1 and niz[x][y]<korak)return;

    niz[x][y]=korak;

    pretraziLavirint(niz,sirina,visina,x+1,y,korak+1);
    pretraziLavirint(niz,sirina,visina,x-1,y,korak+1);
    pretraziLavirint(niz,sirina,visina,x,y+1,korak+1);
    pretraziLavirint(niz,sirina,visina,x,y-1,korak+1);
}

int main(){
    ifstream in;
    in.open("lavirint.txt");

    int sirina,visina;
    int niz[100][100];

    in>>sirina>>visina;
    cout<<sirina<<"\n";
    cout<<visina<<"\n";
    unos(in,niz,sirina,visina);
    ispis(niz,sirina,visina);
    pretraziLavirint(niz,sirina,visina,8,0,0);
    ispis(niz,sirina,visina);


    in.close();
}