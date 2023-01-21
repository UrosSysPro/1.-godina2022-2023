#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    double p=0;
    int r=a/2;
    for(int x=-r;x<=r;x++){
        for(int y=-r;y<=r;y++){
            int precnik=x*x+y*y;
            if(r*r>precnik)
                p++;
        }
    }
    double pi=p/(r*r);
    cout.precision(17);
    cout<<pi;
}