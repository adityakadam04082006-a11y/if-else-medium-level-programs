#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0 && num <= 100) {
        if (num % 3 == 0 && num % 5 == 0) {
            printf("Divisible by both 3 and 5\n");
        } else {
            printf("Not divisible by both 3 and 5\n");
        }
    } else {
        printf("Number out of range (1-100)\n");
    }
    return 0;
}