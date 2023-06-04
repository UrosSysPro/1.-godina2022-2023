#include<iostream>

using namespace std;

int main(){
    string rec;
    cin>>rec;
    int n=rec.length();
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(rec[i]>rec[i+1]){
                char p=rec[i];
                rec[i]=rec[i+1];
                rec[i+1]=p;
            }
        }
    }
    cout<<rec;
}