#include<cmath>
using namespace std;

int max(int a,int b){
    int resenje;
    if(a>b)
        resenje=a;
    else
        resenje=b;
    return resenje;
}
int min(int a,int b){
    int resenje;
    if(a<b)
        resenje=a;
    else
        resenje=b;
    return resenje;
}
int abs(int a){
    return max(a,-a);
}


int stepen(int a,int n){
    int resenje=1;
    for(int i=0;i<n;i++){
        resenje*=a;
    }
    return resenje;
}

int main(){
    
}