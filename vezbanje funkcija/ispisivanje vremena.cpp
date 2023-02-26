#include<iostream>
#include<unistd.h>
// #include<Windows.h>
using namespace std;

void ispisiVreme(int h,int min,int s){
    int p=h%10;
    if(h>10 and h<20){
        cout<<h<<"sati ";
    }else if(p==1){
        cout<<h<<"sat ";
    }else if(p>=2 and p<=4){
        cout<<h<<"sata ";
    }else{
        cout<<h<<"sati ";
    }

    p=min%10;
    if(min>10 and min<20){
        cout<<min<<"minuta ";
    }else if(p==1){
        cout<<min<<"minut ";
    }else{
        cout<<min<<"minuta ";
    }

    p=s%10;
    if(s>10 and s<20){
        cout<<s<<"sekundi ";
    }else if(p==1){
        cout<<s<<"sekunda ";
    }else if(p>=2 and p<=4){
        cout<<s<<"sekunde ";
    }else{
        cout<<s<<"sekundi ";
    }
}

void ispisiVremeUSekundama(int s){
    int h,min;
    h=s/3600%60;
    min=s/60%60;
    s=s%60;
    ispisiVreme(h,min,s);
}

void enter(){
    cout<<"\n";
}

int main(){
    int vreme=0;

    while(1){
        ispisiVremeUSekundama(vreme);
        enter();
        vreme++;
        // for(int i=0;i<1000000000;i++);
        sleep(1);
    }
}

//2 sata 35 minuta 32 sekunde
//6 stai 41 minut  35 sekundi

//1 sat
//2 3 4 sata
//0 5 6 7 8 9 sati

//1 minut
//0 2 3 4 5 6 7 8 9 minuta

//1 sekunda
//2 3 4 sekunde
//0 5 6 7 8 9 sekundi