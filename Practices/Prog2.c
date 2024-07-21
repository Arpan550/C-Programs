#include<stdio.h>

int main(){
    char c;
    printf("enter a character: ");
    scanf(" %c", &c);

    if((c>=65 && c<=90 )|| (c>=97 && c<=122)){
        printf("Albhabet");
    } else{
        printf("Not a alphabet");
    }
    return 0;
}
