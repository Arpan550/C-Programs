#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c) {
    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return;
    }
    
    float discriminant = b * b - 4 * a * c;
    float sqrt_val = sqrt(fabs(discriminant));

    if (discriminant > 0) {
        printf("Real and different roots:\n");
        printf("Root 1 = %.2f\n", (-b + sqrt_val) / (2 * a));
        printf("Root 2 = %.2f\n", (-b - sqrt_val) / (2 * a));
    } else if (discriminant == 0) {
        printf("Real and same roots:\n");
        printf("Root 1 = Root 2 = %.2f\n", -b / (2 * a));
    } else {
        printf("Complex roots:\n");
        printf("Root 1 = %.2f + %.2fi\n", -b / (2 * a), sqrt_val / (2 * a));
        printf("Root 2 = %.2f - %.2fi\n", -b / (2 * a), sqrt_val / (2 * a));
    }
}

int main() {
    float a, b, c;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    findRoots(a, b, c);

    return 0;
}
