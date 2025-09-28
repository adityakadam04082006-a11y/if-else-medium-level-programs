#include <stdio.h>
int main() {
    int num, i = 1, found = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0) {
        while (i * (i + 1) / 2 <= num) {
            if (i * (i + 1) / 2 == num) {
                found = 1;
                break;
            }
            i++;
        }
        if (found) {
            printf("Triangular number\n");
        } else {
            printf("Not a triangular number\n");
        }
    } else {
        printf("Invalid input (negative number)\n");
    }
    return 0;
}