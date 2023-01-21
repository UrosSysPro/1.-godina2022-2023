#include<iostream>

using namespace std;

int main(){
    int stepen=9;

    for(int j=0;j<stepen;j++){
        for(int i=0;i<stepen;i++){
            if(i==1 and j==1)
                cout<<"  ";
            else
                cout<<" *";
        }
        cout<<"\n";
    }
}