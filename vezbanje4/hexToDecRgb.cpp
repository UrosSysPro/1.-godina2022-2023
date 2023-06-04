//  #51ef7f
//  rgb(70,240,110)

#include<iostream>

using namespace std;

int vrednostCifre(char c){
    if(c>='0' and c<='9'){
        return c-'0';
    }
    if(c>='A' and c<='Z'){
        return c-'A'+10;
    }
    if(c>='a' and c<='z'){
        return c-'a'+10;
    }
    return 0;
}

int hexToDec(char c1,char c2){
    return vrednostCifre(c1)*16+vrednostCifre(c2);
}

int main(){
    string boja;
    cin>>boja;

    cout<<"rgb(";
    cout<<hexToDec(boja[1],boja[2]);
    cout<<",";
    cout<<hexToDec(boja[3],boja[4]);
    cout<<",";
    cout<<hexToDec(boja[5],boja[6]);
    cout<<")";
}
