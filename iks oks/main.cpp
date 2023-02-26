#include<iostream>

using namespace std;


void obrisiEkran(char niz[30][20],char c,int sirina,int visina){
    for(int j=0;j<visina;j++){
        for(int i=0;i<sirina;i++){
            niz[i][j]=c;
        }
    }
}

void ispisiEkran(char niz[30][20],int sirina,int visina){
    for(int j=0;j<visina;j++){
        for(int i=0;i<sirina;i++){

            char c=niz[i][j];
            if(i==0 or i==sirina-1)c='|';
            if(j==0 or j==visina-1)c='-';
            if((i==0 or i==sirina-1) and (j==0 or j==visina-1))c='+';
            
            cout<<c<<" ";
        
        }
        cout<<"\n";
    }
}

void nacrtajPravougaonik(char niz[30][20],char c,int x,int y,int sirina,int visina){
    for(int j=y;j<y+visina;j++){
        for(int i=x;i<x+sirina;i++){
            niz[i][j]=c;
        }
    }
}

int abs(int a){
    if(a>0){
        return a;
    }else{
        return -a;
    }
}
int max(int a,int b){
    int m;
    if(a>b){
        m=a;
    }else{
        m=b;
    }
    return m;
}

void nacrtajLiniju(char niz[30][20],char c,int x1,int y1,int x2,int y2){
    int razlikaX=x1-x2;
    int razlikaY=y1-y2;
    int d=max(abs(razlikaX),abs(razlikaY))+1;

    for(int i=0;i<d;i++){
        float a=i;
        a/=d;
        float x=a*x1+(1-a)*x2;
        float y=a*y1+(1-a)*y2;
        int indexX=x;
        int indexY=y;
        
        niz[indexX][indexY]=c;
    }
}

void nacrtajKrug(char niz[30][20],char c,int x,int y,int r,int sirina,int visina){

}

int main(){
    int sirina=30;
    int visina=20;
    char niz[30][20];

    obrisiEkran(niz,' ',sirina,visina);

    nacrtajPravougaonik(niz,'*',5,5,10,3);
    nacrtajPravougaonik(niz,'*',25,5,3,10);
    nacrtajLiniju(niz,'#',1,19,29,5);

    ispisiEkran(niz,sirina,visina);
}