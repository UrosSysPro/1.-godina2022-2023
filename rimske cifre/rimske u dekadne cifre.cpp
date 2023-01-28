#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    int a=0;
    for(int i=0;i<s.length();i++){
        char p;
        if(i==0){
            p=s[i];
        }else{
            p=s[i-1];
        }
        char c=s[i];

        if(c=='M')
            if(p=='C')
                a+=800;
            else
                a+=1000;
        if(c=='D')
            if(p=='C')
                a+=300;
            else
                a+=500;
        if(c=='C')
            if(p=='X')
                a+=80;
            else
                a+=100;
        if(c=='L')
            if(p=='X')
                a+=30;
            else
                a+=50;
        if(c=='X')
            if(p=='I')
                a+=8;
            else
                a+=10;
        if(c=='I')
            if(p=='I')
                a+=3;
            else
                a+=5;
        if(c=='I')a+=1;
    }

    cout<<a<<"\n";
}