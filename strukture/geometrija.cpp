#include<iostream>
using namespace std;
struct Cube{
    float a;
    float V,P;
};


Cube newCube(float a){
    Cube c;
    c.a=a;
    c.V=a*a*a;
    c.P=6*a*a;
    return c;
}

void printCube(Cube c){
    cout<<"a: "<<c.a<<"\n";
    cout<<"V: "<<c.V<<"\n";
    cout<<"P: "<<c.P<<"\n";
}

int main(){
    float a;
    cin>>a;

    Cube c=newCube(a);

    printCube(c);
}