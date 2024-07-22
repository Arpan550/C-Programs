#include<stdio.h>

int sumOfEl(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    int arr[20];
    int n;

    printf("Enter the size of the array (1 to 20): ");
    if (scanf("%d", &n) != 1) { // Check if scanf reads an integer
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    // Validate the array size
    if (n < 1 || n > 20) {
        printf("Invalid size. Please enter a number between 1 and 20.\n");
        return 1;
    }

    printf("Enter %d element(s) of the array:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) { // Check if scanf reads an integer
            printf("Invalid input. Exiting...\n");
            return 1;
        }
    }

    printf("\nArray:\t");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sum of elements of the array: %d", sumOfEl(arr,n));

    return 0;
}
