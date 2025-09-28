#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) {
        if (num <= 50) {
            printf("Between 0 and 50\n");
        } else if (num <= 100) {
            printf("Between 51 and 100\n");
        } else {
            printf("Greater than 100\n");
        }
    } else {
        printf("Negative number\n");
    }
    return 0;
}