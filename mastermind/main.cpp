#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    //postavi seed
    srand(time(NULL));
    //ucitam znakove
    string znakovi="******";
    znakovi[0]='+'; //srce
    znakovi[1]='-'; //kocka
    znakovi[2]='*'; //detelina
    znakovi[3]='/'; //list
    znakovi[4]='<'; //skocko
    znakovi[5]='>'; //zvezda

    cout<<"  ";
    for(int i=0;i<6;i++){
        cout<<" "<<znakovi[i];
    }
    cout<<"\n  ";
    for(int i=0;i<6;i++){
        cout<<" "<<i;
    }
    cout<<"\n\n";

    //generisem random kombinaciuj(resenje)
    int kombinacija[4];
    for(int i=0;i<4;i++){
        kombinacija[i]=rand()%6;
    }
    for(int i=0;i<4;i++){
        cout<<kombinacija[i]<<" ";
    }
    cout<<"\n";
    //game loop
    int igracJePobedio=0;
    for(int i=0;i<8 and igracJePobedio==0;i++){
        //unos pokusaja
        cout<<i+1<<": ";
        int pokusaj[4];
        for(int j=0;j<4;j++){
            cin>>pokusaj[j];
        }
        //provera da li je igrac pogodio
        igracJePobedio=1;
        for(int j=0;j<4;j++){
            if(pokusaj[j]!=kombinacija[j])
            igracJePobedio=0;
        }
        //poruka za igraca
        int tacnih=0;
        int naMestu=0;
        //napravimo kopiju resenja
        int kopijaResenja[4];
        for(int j=0;j<4;j++){
            kopijaResenja[j]=kombinacija[j];
        }
        for(int j=0;j<4;j++){
            if(kopijaResenja[j]==pokusaj[j]){
                tacnih++;
                naMestu++;
            }
        }
    }
    if(igracJePobedio){
        cout<<"super to je tacno resenje\n";
    }else{
        cout<<"vise srece drugi put\n";
    }
}

// int main(){
//     for(int i=0;i<255;i++){
//         char c=i;
//         cout<<i<<": "<<c<<"\n";
//     }
// }