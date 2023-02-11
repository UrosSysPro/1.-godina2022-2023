#include<iostream>

using namespace std;

float izracunajObim(float stranica){
    return 4*stranica;
}
float izracunajPovrsinu(float stranica){
    return stranica*stranica;
}

void nacrtajKvadrat(int stranica){
    
    for(int j=0;j<stranica;j++){
        for(int i=0;i<stranica;i++){
            cout<<" *";
        }
        cout<<"\n";
    }
    
}

int main(){
    float a;
    cin>>a;

    float obim=izracunajObim(a);
    float povrsina=izracunajPovrsinu(a);

    nacrtajKvadrat(a);
    cout<<"obim je: "<<obim<<"\n";
    cout<<"povrsina je: "<<povrsina<<"\n";
}