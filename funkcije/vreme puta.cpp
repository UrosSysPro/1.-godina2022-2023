#include<iostream>


using namespace std;

int timeToSeconds(int hour,int minute,int seconds){
    return hour*3600+minute*60+seconds;
}

void printTime(int seconds){
    int s=seconds%60;
    int min=seconds/60%60;
    int h=seconds/3600;
    cout<<h<<"h "<<min<<"min "<<s<<"s ";
}

int main(){
    int h1,m1,s1;
    cout<<"Unesite pocetno vreme u formatu h/min/s:";
    cin>>h1>>m1>>s1;

    int h2,m2,s2;
    cout<<"Unesite vreme na kraju u formatu h/min/s:";
    cin>>h2>>m2>>s2;

    int start=timeToSeconds(h1,m1,s1);
    int end=timeToSeconds(h2,m2,s2);

    int diff=end-start;
    cout<<"put je trajao :";
    printTime(diff);
    cout<<"\n";
}