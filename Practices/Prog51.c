#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d ",i);
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
