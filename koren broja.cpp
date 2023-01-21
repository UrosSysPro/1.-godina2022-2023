#include<iostream>

using namespace std;

int main(){
    double broj;
    int preciznost;
    double trenutno;
    cin>>broj>>preciznost;
    double levo=1,desno=broj;
    for(int i=0;i<preciznost;i++){
        trenutno=(levo+desno)/2;
        if(trenutno*trenutno>broj){
            desno=trenutno;
        }else{
            levo=trenutno;
        }
    }
    cout.precision(17);
    cout<<trenutno;
}