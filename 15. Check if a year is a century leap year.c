#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("Century leap year\n");
        } else {
            printf("Century year but not a leap year\n");
        }
    } else {
        printf("Not a century year\n");
    }
    return 0;
}