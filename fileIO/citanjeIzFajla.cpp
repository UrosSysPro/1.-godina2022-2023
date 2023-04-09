#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream file;
    file.open("niz.txt");

   int n;
   file>>n;
   for(int i=0;i<n;i++){
       int a;
       file>>a;
       cout<<a<<"\n";
   }

   file.close();
}