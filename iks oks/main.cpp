#include<iostream>

using namespace std;

void inicijalizujTabelu(char tabela[3][3]){
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            tabela[i][j]=j*3+i+'0'+1;
        }
    }
}

void potez(char tabela[3][3],char igrac){
    int noviIndex=0;
    while(!noviIndex){
        int index;
        cout<<"Unesite indeks polja: ";
        cin>>index;
        int x=(index-1)%3;
        int y=(index-1)/3;
        if(tabela[x][y]!='X' and tabela[x][y]!='Y'){
            tabela[x][y]=igrac;
            noviIndex=1;
        } 
    }
}

void ispis(char tabela[3][3]){

    for(int j=0;j<3;j++){
        cout<<"+---+---+---+\n|";
        for(int i=0;i<3;i++){
            cout<<" "<<tabela[i][j]<<" |";
        }
        cout<<"\n";
    }
    cout<<"+---+---+---+\n";
}

int provera(char tabela[3][3]){
    int gameOver=0;
    for(int i=0;i<3;i++){
        if(tabela[i][0]==tabela[i][1] and tabela[i][1]==tabela[i][2]){
            gameOver=1;
        }
        if(tabela[0][i]==tabela[1][i] and tabela[1][i]==tabela[2][i]){
            gameOver=1;
        }
    }
    if(tabela[0][0]==tabela[1][1] and tabela[1][1]==tabela[2][2]){
        gameOver=1;
    }
    if(tabela[2][0]==tabela[1][1] and tabela[1][1]==tabela[0][2]){
        gameOver=1;
    }
    return gameOver;
}

int main(){
    //setup
    char tabela[3][3];
    inicijalizujTabelu(tabela);
    int gameOver=0;
    char igrac='X';
    
    for(int i=0;i<9 and !gameOver;i++){
        ispis(tabela);
        potez(tabela,igrac);
        gameOver=provera(tabela);
        
        if(igrac=='X')
            igrac='O';
        else
            igrac='X';
    }

    ispis(tabela);
    if(igrac=='X')
        igrac='O';
    else
        igrac='X';

    if(gameOver==0){
        cout<<"Nereseno!!!\n";
    }else{
        cout<<"Pobedio je igrac: "<<igrac<<" !!!\n";
    }
}