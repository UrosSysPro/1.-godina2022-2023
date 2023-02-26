#include <iostream>

using namespace std;

int brojCifara(int broj){
    int resenje=0;
    while (broj!=0)
    {
        resenje++;
        broj/=10;
    }
    return resenje;
}

void ispisiBroj(int broj,int velicina){
    //ispise nekoliko puta _

    for(int i=0;i<velicina-brojCifara(broj);i++){
        cout<<" "; 
    }

    cout<<broj;
}

int main()
{
    cout << "Unesite sirinu, visinu i velicinu jednog broja: ";
    int sirina, visina, velicina;

    cin >> sirina >> visina >> velicina;
   
    int brojac=1;

    for(int j=0;j<visina;j++){
        for(int i = 0; i < sirina; i++){
            ispisiBroj(brojac,velicina);
            brojac++;
        }
        cout<<"\n";
    }
}
