#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int max=n*n;
    int brojCifara=0;
    int stepen=1;
    while (max!=0){
        stepen*=10;
        brojCifara++;
        max/=10;
    }
    

    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            int broj=i*j;
            int trenutniStepen=stepen;
            while (broj<trenutniStepen){
                cout<<" ";
                trenutniStepen/=10;
            }
            cout<<broj;
        }
        cout<<"\n";
    }
}