#include<stdio.h>

int main(){
    int row;
    printf("Enter no of rows: ");
    scanf("%d", &row);
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}