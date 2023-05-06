#include<iostream>

using namespace std;

int main(){
    int h1,min1,s1;
    int h2,min2,s2;

    cin>>h1>>min1>>s1;
    cin>>h2>>min2>>s2;

    // if(h1>h2 or (h1==h2 and min1>min2) or (h1==h2 and min1==min2 and s1>s2)){
    //     cout<<"prvi termin je ranije, drugi kasnije";
    // }else{
    //     cout<<"prvi termin je kasnije, drugi ranije";
    // }
    int t1=h1*60*60+min1*60+s1;
    int t2=h2*60*60+min2*60+s2;
    if(t1>t2){
        cout<<"prvi termin je ranije, drugi kasnije";
    }else{
        cout<<"prvi termin je kasnije, drugi ranije";
    }
}