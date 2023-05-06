#include<stdio.h>

int main(){

    char c;
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("%c je veliko slovo\n",c);
    }else if(c>='a' && c<='z'){
        printf("%c je malo slovo\n",c);
    }else{
        printf("%c je znak\n",c);
    }

    return 0;
}