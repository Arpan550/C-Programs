#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int numberOfDaysInMonth(int month, int year) {
    switch (month) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            return 31;
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            return 30;
        case 2: 
            if (isLeapYear(year)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1; 
    }
}

int main() {
    int month, year;
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    int days = numberOfDaysInMonth(month, year);

    if (days == -1) {
        printf("Invalid month entered.\n");
    } else {
        printf("Number of days in month %d of year %d is %d.\n", month, year, days);
    }

    return 0;
}
