#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Allocate memory for the Pascal's Triangle
    int** triangle = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        triangle[i] = (int*)malloc((i + 1) * sizeof(int));
    }

    // Generate Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(triangle[i]);
    }
    free(triangle);

    return 0;
}
