#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream fajl;

    fajl.open("izlaz.txt");

    for(int j=0;j<100;j++){
        for(int i=0;i<30;i++){
            fajl<<"*";
        }
        fajl<<"\n";
    }

    fajl.close();
}