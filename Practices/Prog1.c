#include<stdio.h>

int main(){
    char c;
    printf("enter a character: ");
    scanf(" %c", &c);

    switch(c){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("Vowel");
            break;
        default:
             printf("Not a Vowel");
            break;
    }
    return 0;
}