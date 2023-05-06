#include<iostream>
#include<ctime>
using namespace std;


#define pocetak main
#define print(x) cin>>x
typedef int broj;

broj pocetak(){
    // broj start=time(NULL);
    char a;
    print(a);
    
    if(a>='A' and a<='Z'){
        cout<<"slovo je veliko";
    }else{
        cout<<"slovo je malo";
    }
}