/*

f(niz,i,k,n)={
    f(niz,i+1,k,n)    ako je niz[i]<=k
    f(niz,i+1,k,n)+1  ako je niz[i]>k
    0                 ako je i>n-1

}

*/

#include<iostream>

using namespace std;

int f(int niz[7],int i,int k,int n){
    if(i>n-1)return 0;
    if(niz[i]<=k)
        return f(niz,i+1,k,n);
    else
        return f(niz,i+1,k,n)+1;
}

int main(){
    int niz[]{1,4,5,6,2,3,9};
    int n=7;
    int i=0;
    int k=4;

    int brojVecihOdK=f(niz,i,k,n);
    cout<<"u nizu ima "<<brojVecihOdK<<" broja vecih od k=4\n";
}