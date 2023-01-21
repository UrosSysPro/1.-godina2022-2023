#include<iostream>
using namespace std;

int main(){
    string red;
    int duzinaReda;
    
    getline(cin,red);
    duzinaReda=red.length();

    for(int i=0;i<duzinaReda;i++){
        char c=red[i];
        if(c>='a'&&c<='z'){
            c+=2;
            if(c>'z'){
                c-='z'-'a'+1;
            }
            red[i]=c;
        }
        if(c>=' '&&c<='?'){
            c+=10;
            if(c>'?'){
                c-='?'-' '+1;
            }
            red[i]=c;
            // cout<<"ovo je znak\n";
        }
    }
    for(int i=0;i<duzinaReda;i+=2){
        char c;
        int prvi=i;
        int drugi=i+1;
        
        c=red[prvi];
        red[prvi]=red[drugi];
        red[drugi]=c;
    }

    cout<<red;
}