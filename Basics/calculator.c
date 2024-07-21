#include<stdio.h>

int main(){
    char op;
    int a, b;
    
    while (1)
    {
        printf("\n\nSelect operation to perform:\n");
        printf("A: Addition\n");
        printf("B: Subtraction\n");
        printf("C: Multiplication\n");
        printf("D: Division\n");
        printf("M: Modulo\n");
        printf("E: Exit\n");
        printf("Enter your choice: ");
        
        // Clear the input buffer before reading the choice
        while ((getchar()) != '\n');
        
        scanf("%c", &op);
        
        if(op == 'E' || op == 'e'){
            break;
        }

        // Check for valid operations
        if (op == 'A' || op == 'a' || op == 'B' || op == 'b' || op == 'C' || op == 'c' || op == 'D' || op == 'd' || op == 'M' || op == 'm') {
            printf("Enter the values of A and B: ");
            scanf("%d %d", &a, &b);
        }

        switch (op)
        {
            case 'A':
            case 'a':
                printf("\nAddition: %d + %d = %d", a, b, a + b);
                break;

            case 'B':
            case 'b':
                printf("\nSubtraction: %d - %d = %d", a, b, a - b);
                break;

            case 'C':
            case 'c':
                printf("\nMultiplication: %d * %d = %d", a, b, a * b);
                break;

            case 'D':
            case 'd':
                if (b == 0) {
                    printf("\nError: Division by zero is not allowed.");
                } else {
                    printf("\nDivision: %d / %d = %d", a, b, a / b);
                }
                break;

            case 'M':
            case 'm':
                if (b == 0) {
                    printf("\nError: Modulo by zero is not allowed.");
                } else {
                    printf("\nModulo: %d %% %d = %d", a, b, a % b);
                }
                break;
        
            default:
                printf("\nInvalid operation. Please try again.");
                break;
        }
    }
    return 0;
}
