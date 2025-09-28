#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }
    return 0;
}