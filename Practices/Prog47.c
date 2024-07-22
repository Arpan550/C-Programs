#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if((i==0 || i==rows-1) || (j==0 || j==columns-1)){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
