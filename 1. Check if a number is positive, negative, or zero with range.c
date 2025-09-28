#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        if (num > 100) {
            printf("Positive and greater than 100\n");
        } else {
            printf("Positive but not greater than 100\n");
        }
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}