#include<iostream>

using namespace std;

int izracunaj(int a,int b,char znak){
    int resenje=0;
    if(znak=='+')resenje=a+b;
    if(znak=='-')resenje=a-b;
    if(znak=='*')resenje=a*b;
    if(znak=='/')resenje=a/b;
    return resenje;
}

int main(){
    string red;
    cin>>red;
    char operatori[999];
    int promenljive[1000];

    int brojOperatora=0,brojPromenljivih=0;

    for(int i=0;i<red.length();i++){
        char c=red[i];
        if(c>='0' and c<='9'){
            promenljive[brojPromenljivih]*=10;
            promenljive[brojPromenljivih]+=c-'0';
        }else{
            operatori[brojOperatora]=c;
            brojOperatora++;
            brojPromenljivih++;
        }
    }
    brojPromenljivih++;

    // for(int i=0;i<brojPromenljivih;i++){
    //     cout<<promenljive[i]<<" ";
    // }
    // cout<<"\n";
    // for(int i=0;i<brojOperatora;i++){
    //     cout<<operatori[i]<<" ";
    // }
    // cout<<"\n";
    int resenje=promenljive[0];

    for(int i=0;i<brojOperatora;i++){
        char znak=operatori[i];
        resenje=izracunaj(resenje,promenljive[i+1],znak);
    }
    cout<<red<<'='<<resenje<<"\n";
}

//       4/2*3-2+1
//       2*3-2+1
//       6-2+1
//       4+1
//       5

//    [4,2,3,2,1] 
//    [/,*,-,+]


// a+=a>b/c++-10 and d+(c=2-d/10)

//aritmeticki 
// 0    // ++ --
// 1    // * /
// 2    // + - %
// 3//uporedjivanje < > == != >= <=
// 4//dodela vrednosti = *= /= += -= 
// 5//logicki or and