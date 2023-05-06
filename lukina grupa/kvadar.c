#include<stdio.h>


int main(){
    int a,b,c;
    printf("Unesite stranice kvadra: ");
    scanf("%d %d %d",&a,&b,&c);

    int povrsina=2*(a*b+a*c+b*c);
    int zapremina=a*b*c;

    printf("povrsina je: %d\n",povrsina);
    printf("zapremina je: %d\n",zapremina);
}