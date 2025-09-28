#include <stdio.h>
int main() {
    float marks;
    printf("Enter marks (0-100): ");
    scanf("%f", &marks);
    if (marks >= 0 && marks <= 100) {
        if (marks >= 40) {
            if (marks >= 60) {
                printf("Passed with First Class\n");
            } else {
                printf("Passed\n");
            }
        } else {
            printf("Failed\n");
        }
    } else {
        printf("Invalid marks\n");
    }
    return 0;
}