#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) {
        if (num >= 100 && num <= 999) {
            printf("Exactly 3 digits\n");
        } else {
            printf("Not exactly 3 digits\n");
        }
    } else {
        printf("Negative number\n");
    }
    return 0;
}