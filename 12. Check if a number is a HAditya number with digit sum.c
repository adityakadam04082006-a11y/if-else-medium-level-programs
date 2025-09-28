#include <stdio.h>
int main() {
    int num, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        original = num;
        while (original != 0) {
            sum += original % 10;
            original /= 10;
        }
        if (num % sum == 0) {
            printf("Aditya number\n");
        } else {
            printf("Not a Aditya number\n");
        }
    } else {
        printf("Invalid input (non-positive number)\n");
    }
    return 0;
}