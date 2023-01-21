#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,i=3;
    cin>>a;

    int jesteProst=1;

    int koren=sqrt(a);
    while (i<koren){
        if(a%i==0){
            jesteProst=0;
        }
        i++;
    }
    
    if(jesteProst==1)
        cout<<"jeste\n";
    else
        cout<<"nije\n";
    
}