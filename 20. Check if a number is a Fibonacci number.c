#include <stdio.h>
int main() {
    int num, a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0 || num == 1) {
        printf("Fibonacci number\n");
    } else {
        c = a + b;
        while (c <= num) {
            if (c == num) {
                printf("Fibonacci number\n");
                return 0;
            }
            a = b;
            b = c;
            c = a + b;
        }
        printf("Not a Fibonacci number\n");
    }
    return 0;
}