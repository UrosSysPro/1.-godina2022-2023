#include<iostream>
using namespace std;

void print(string imePromenljive,int vrednost){
    cout<<imePromenljive<<" je: "<<vrednost<<"\n";
}

int main(){
    int a=2;
    int b=3;
    int max=a;
    if(b>max){
        max=b;
    }

    print("a",a);
    print("b",b);
    print("max",max);
}