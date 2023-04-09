#include<iostream>
#include<fstream>
#include<ctime>

using namespace std;

void generisiNiz(string imeFajla,int n,int max){
    srand(time(NULL));
    ofstream file;
    file.open(imeFajla);

    file<<n<<"\n";
    for(int i=0;i<n;i++){
        file<<rand()%max<<"\n";
    }

    file.close();
}

int main(){
    cout<<"########################\n";
    cout<<"# Random niz generator #\n";
    cout<<"########################\n";

    string imeFajla;
    int brojBrojeva;
    int max;
    cout<<"Unesite ime fajla: ";
    cin>>imeFajla;
    cout<<"Unesite velicinu niza: ";
    cin>>brojBrojeva;
    cout<<"Unesite najveci random broj: ";
    cin>>max;

    generisiNiz(imeFajla,brojBrojeva,max);
}